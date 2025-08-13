#include <iostream>
#include "utility/meta_utils/meta_utils.hpp"
#include "utility/user_input/user_input.hpp"

#include "string_invoker/string_invoker.hpp"

void interactive_invoker() {

    std::unordered_map<std::string, meta_utils::MetaFunctionSignature> options_dict;
    for (size_t i = 0; i < string_invoker::all_meta_function_signatures.size(); ++i) {
        options_dict[std::to_string(i + 1)] = string_invoker::all_meta_function_signatures[i];
    }

    if (options_dict.empty()) {
        std::cout << "No functions available.\n";
        return; // nothing to do
    }

    while (true) {
        // Build options dictionary fresh each loop in case functions change

        // Display options
        std::cout << "\nSelect a function to invoke:\n";
        for (const auto &[key, func] : options_dict) {
            std::cout << key << ". " << func.to_string() << "\n";
        }
        std::cout << "q. Quit\n";

        // Get valid selection or quit
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

        // Collect arguments
        std::vector<std::string> args;
        for (const auto &param : selected.parameters) {
            std::string val =
                get_input_with_default("Enter value for " + param.name + " (" + param.type.get_type_name() + ")", "0");
            args.push_back(val);
        }

        // Assemble full invocation string
        std::string invocation = selected.get_fully_qualified_name() + "(";
        for (size_t i = 0; i < args.size(); ++i) {
            invocation += args[i];
            if (i < args.size() - 1) {
                invocation += ", ";
            }
        }
        invocation += ")";

        // Call the invoker
        auto result = string_invoker::invoker_that_returns_std_string(invocation);
        if (result.has_value()) {
            std::cout << "Result: " << result.value() << "\n";
        } else {
            std::cout << "Invocation failed.\n";
        }
    }
}

int main() {

    meta_utils::StringInvokerGenerationSettingsForHeaderSource basic_math_settings("src/basic_math.hpp",
                                                                                   "src/basic_math.cpp", true, true);
    meta_utils::generate_string_invokers_program_wide({basic_math_settings});
    std::cout << "Hello, World!" << std::endl;
    interactive_invoker();
    return 0;
}
