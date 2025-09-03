#include <iostream>
#include "utility/meta_utils/meta_utils.hpp"
#include "utility/user_input/user_input.hpp"

#include "meta_program/meta_program.hpp"

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

int main() {

    meta_utils::StringInvokerGenerationSettingsForHeaderSource basic_math_settings("src/basic_math.hpp",
                                                                                   "src/basic_math.cpp", true, true);
    meta_utils::generate_string_invokers_program_wide({basic_math_settings});
    std::cout << "Hello, World!" << std::endl;
    meta_program::MetaProgram meta_program({});
    auto sub = meta_program.deferred_invoker_that_returns_double("subtract(3, 4)");

    std::cout << "subtract: " << sub.value()() << std::endl;

    interactive_invoker();

    return 0;
}
