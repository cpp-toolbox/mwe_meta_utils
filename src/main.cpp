#include <iostream>
#include "utility/cpp_parsing/cpp_parsing.hpp"
#include "utility/meta_utils/meta_utils.hpp"
#include "utility/user_input/user_input.hpp"

#include "meta_program/meta_program.hpp"
#include "custom_type.hpp"

// NOTE: can be removed soon.
void interactive_invoker() {

    meta_program::MetaProgram meta_program(meta_utils::concrete_types);

    std::map<std::string, meta_utils::MetaFunctionSignature> options_dict;
    for (size_t i = 0; i < meta_program.meta_basic_math.all_meta_function_signatures.size(); ++i) {
        options_dict[std::to_string(i + 1)] = meta_program.meta_basic_math.all_meta_function_signatures[i];
    }

    if (options_dict.empty()) {
        std::cout << "No functions available.\n";
        return; // nothing to do
    }
    std::vector<std::pair<std::string, meta_utils::MetaFunctionSignature>> sorted_options(options_dict.begin(),
                                                                                          options_dict.end());

    std::sort(sorted_options.begin(), sorted_options.end(),
              [](const auto &a, const auto &b) { return std::stoi(a.first) < std::stoi(b.first); });

    bool keep_running = true;

    while (keep_running) {
        std::cout << "\nSelect a function to invoke:\n";
        for (const auto &[key, func] : sorted_options) {
            std::cout << key << ". " << func.to_string() << "\n";
        }
        std::cout << "q. Quit\n";

        std::string choice = get_validated_input(
            []() {
                std::cout << "Enter choice: ";
                std::string s;
                std::getline(std::cin, s);
                return text_utils::trim(s);
            },
            [&](const std::string &input) { return input == "q" || options_dict.find(input) != options_dict.end(); },
            "Invalid choice. Please try again.");

        if (choice == "q") {
            std::cout << "Goodbye.\n";
            break;
        }

        meta_utils::MetaFunctionSignature selected = options_dict[choice];

        std::vector<std::string> args;
        for (const auto &param : selected.parameters) {
            std::string val =
                get_input_with_default("Enter value for " + param.name + " (" + param.type.get_type_name() + ")", "0");
            args.push_back(val);
        }

        std::string invocation = meta_utils::get_fully_qualified_name(selected) + "(";
        for (size_t i = 0; i < args.size(); ++i) {
            invocation += args[i];
            if (i < args.size() - 1) {
                invocation += ", ";
            }
        }
        invocation += ")";

        auto result = meta_program.invoker_that_returns_std_string(invocation);
        if (result.has_value()) {
            std::cout << "Result: " << result.value() << "\n";
        } else {
            std::cout << "Invocation failed.\n";
        }

        std::string run_again = get_validated_input(
            []() {
                std::cout << "Do you want to run another function? (y/n): ";
                std::string s;
                std::getline(std::cin, s);
                return text_utils::trim(s);
            },
            [](const std::string &input) { return input == "y" || input == "n"; }, "Please enter 'y' or 'n'.");

        if (run_again == "n") {
            keep_running = false;
            std::cout << "Goodbye.\n";
        }
    }
}

// ---------- The main function to assemble a MetaClass ----------

int main() {

    auto settings = meta_utils::CustomTypeExtractionSettings("src/custom_type.hpp");

    meta_utils::register_custom_types_into_meta_types(settings);

    // NOTE: another question is how private/public is handled in the context of serialization.

    // this needs to know about the concrete types I believe now.
    meta_utils::StringInvokerGenerationSettingsForHeaderSource basic_math_settings("src/basic_math.hpp",
                                                                                   "src/basic_math.cpp", true, true);
    meta_utils::generate_string_invokers_program_wide({basic_math_settings},
                                                      meta_utils::meta_types.get_concrete_types());

    // TODO: next step is to be able to automatically create serializers for types I want.
    std::cout << "Hello, World!" << std::endl;

    // TODO: next step is we need struct support, but the good thing is that structs are just special classes where all
    // things are public by default and so when taking a string represeting a struct we can have the logic that parses
    // that handle when it's a struct.

    // auto pr = cpp_parsing::enum_class_def_parser->parse(
    //     " enum class PacketType : uint8_t { MOUSE_UPDATE, GAME_UPDATE, SOUND_UPDATE, }; ");
    //
    // // std::cout << pr.to_string() << std::endl;
    //
    // auto cpr = cpp_parsing::clean_parse_result(pr);
    // std::cout << cpr.to_string() << std::endl;

    meta_program::MetaProgram meta_program(meta_utils::meta_types.get_concrete_types());
    auto sub = meta_program.deferred_invoker_that_returns_double("subtract(3, 4)");

    std::cout << "subtract: " << sub.value()() << std::endl;

    B b(13);
    X x(42, "hello world", {1, 2, 3, 4, 5, 6}, b);
    X x2(36, "goobye world", {6, 5, 4, 3, 2, 1}, b);
    Y y("holder", 99, A::TWO, {x, x2});

    std::cout << meta_program.X_to_string(x) << std::endl;

    auto sx = meta_program.serialize_X(x);
    auto x_undo = meta_program.deserialize_X(sx);

    std::cout << meta_program.X_to_string(x_undo) << std::endl;

    std::cout << meta_program.Y_to_string(y) << std::endl;
    auto sy = meta_program.serialize_Y(y);
    auto y_undo = meta_program.deserialize_Y(sy);
    std::cout << meta_program.Y_to_string(y_undo) << std::endl;

    // interactive_invoker();

    return 0;
}
