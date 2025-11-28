#ifndef META_BASIC_MATH_HPP
#define META_BASIC_MATH_HPP

#include "../utility/meta_utils/meta_utils.hpp"
#include "../basic_math.hpp"
#include <regex>
#include <optional>

namespace meta_basic_math {


class MetaBasicMath {
public:
        MetaBasicMath(std::vector<meta_utils::MetaType> &concrete_types) : concrete_types(concrete_types) {
        }

public:
    std::vector<meta_utils::MetaType> & concrete_types;
    meta_utils::MetaFunctionSignature mfs_add{"double add(double a, double b)", ""};
    meta_utils::MetaFunctionSignature mfs_subtract{"double subtract(double a, double b)", ""};
    meta_utils::MetaFunctionSignature mfs_multiply{"double multiply(double a, double b)", ""};
    meta_utils::MetaFunctionSignature mfs_divide{"double divide(double a, double b)", ""};
    meta_utils::MetaFunctionSignature mfs_power{"double power(double base, int exponent)", ""};
    meta_utils::MetaFunctionSignature mfs_factorial{"unsigned int factorial(unsigned int n)", ""};
    meta_utils::MetaFunctionSignature mfs_gcd{"int gcd(int a, int b)", ""};
    meta_utils::MetaFunctionSignature mfs_lcm{"int lcm(int a, int b)", ""};
    meta_utils::MetaFunctionSignature mfs_square_root{"double square_root(double x)", ""};
    meta_utils::MetaFunctionSignature mfs_absolute{"double absolute(double x)", ""};
    meta_utils::MetaFunctionSignature mfs_fibonacci{"unsigned int fibonacci(unsigned int n)", ""};
    std::vector<meta_utils::MetaFunctionSignature> all_meta_function_signatures = {mfs_add, mfs_subtract, mfs_multiply, mfs_divide, mfs_power, mfs_factorial, mfs_gcd, mfs_lcm, mfs_square_root, mfs_absolute, mfs_fibonacci};
    std::optional<int> invoker_that_returns_int(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_gcd.invocation_regex))) {
                return gcd_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_lcm.invocation_regex))) {
                return lcm_string_invoker(invocation);
            }
        
            return std::nullopt;

    }
    std::optional<std::function<int()>> deferred_invoker_that_returns_int(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_gcd.invocation_regex))) {
                return gcd_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_lcm.invocation_regex))) {
                return lcm_deferred_string_invoker(invocation);
            }
        
            return std::nullopt;

    }
    std::optional<unsigned int> invoker_that_returns_unsigned_int(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_factorial.invocation_regex))) {
                return factorial_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_fibonacci.invocation_regex))) {
                return fibonacci_string_invoker(invocation);
            }
        
            return std::nullopt;

    }
    std::optional<std::function<unsigned int()>> deferred_invoker_that_returns_unsigned_int(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_factorial.invocation_regex))) {
                return factorial_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_fibonacci.invocation_regex))) {
                return fibonacci_deferred_string_invoker(invocation);
            }
        
            return std::nullopt;

    }
    std::optional<double> invoker_that_returns_double(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_add.invocation_regex))) {
                return add_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_subtract.invocation_regex))) {
                return subtract_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_multiply.invocation_regex))) {
                return multiply_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_divide.invocation_regex))) {
                return divide_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_power.invocation_regex))) {
                return power_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_square_root.invocation_regex))) {
                return square_root_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_absolute.invocation_regex))) {
                return absolute_string_invoker(invocation);
            }
        
            return std::nullopt;

    }
    std::optional<std::function<double()>> deferred_invoker_that_returns_double(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_add.invocation_regex))) {
                return add_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_subtract.invocation_regex))) {
                return subtract_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_multiply.invocation_regex))) {
                return multiply_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_divide.invocation_regex))) {
                return divide_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_power.invocation_regex))) {
                return power_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_square_root.invocation_regex))) {
                return square_root_deferred_string_invoker(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_absolute.invocation_regex))) {
                return absolute_deferred_string_invoker(invocation);
            }
        
            return std::nullopt;

    }
    std::optional<std::string> invoker_that_returns_std_string(std::string &invocation) {
        if (std::regex_match(invocation, std::regex(mfs_add.invocation_regex))) {
                return add_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_subtract.invocation_regex))) {
                return subtract_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_multiply.invocation_regex))) {
                return multiply_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_divide.invocation_regex))) {
                return divide_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_power.invocation_regex))) {
                return power_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_factorial.invocation_regex))) {
                return factorial_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_gcd.invocation_regex))) {
                return gcd_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_lcm.invocation_regex))) {
                return lcm_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_square_root.invocation_regex))) {
                return square_root_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_absolute.invocation_regex))) {
                return absolute_string_invoker_to_string(invocation);
            }
            if (std::regex_match(invocation, std::regex(mfs_fibonacci.invocation_regex))) {
                return fibonacci_string_invoker_to_string(invocation);
            }
        
            return std::nullopt;

    }
    void start_interactive_invoker() {
        std::cout << "Enter function invocation strings (type 'quit' to exit):\n";
        
            std::string input;
            while (true) {
                std::cout << "> ";
                std::getline(std::cin, input);
        
                if (input == "quit")
                    break;
        
                std::optional<std::string> result = invoker_that_returns_std_string(input);
                if (result.has_value()) {
                    std::cout << "Result: " << result.value() << "\n";
                } else {
                    std::cout << "Invocation failed.\n";
                }
            }
        
            std::cout << "Goodbye!\n";

    }
    std::optional<double> add_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*add\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
            double result = add(a, b);
            return result;

    }
    std::optional<std::function<double()>> add_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*add\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return add(a, b);
        };
            return deferred_func;

    }
    std::optional<double> subtract_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*subtract\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
            double result = subtract(a, b);
            return result;

    }
    std::optional<std::function<double()>> subtract_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*subtract\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return subtract(a, b);
        };
            return deferred_func;

    }
    std::optional<double> multiply_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*multiply\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
            double result = multiply(a, b);
            return result;

    }
    std::optional<std::function<double()>> multiply_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*multiply\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return multiply(a, b);
        };
            return deferred_func;

    }
    std::optional<double> divide_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*divide\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
            double result = divide(a, b);
            return result;

    }
    std::optional<std::function<double()>> divide_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*divide\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stod(s); };
            double b = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return divide(a, b);
        };
            return deferred_func;

    }
    std::optional<double> power_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*power\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double base = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stoi(s); };
            int exponent = conversion2(match[2]);
        
            double result = power(base, exponent);
            return result;

    }
    std::optional<std::function<double()>> power_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*power\s*\(\s*(-?\d+(?:\.\d+)?)\s*,\s*(-?\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double base = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stoi(s); };
            int exponent = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return power(base, exponent);
        };
            return deferred_func;

    }
    std::optional<unsigned int> factorial_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*factorial\s*\(\s*(\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            unsigned int n = conversion1(match[1]);
        
            unsigned int result = factorial(n);
            return result;

    }
    std::optional<std::function<unsigned int()>> factorial_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*factorial\s*\(\s*(\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            unsigned int n = conversion1(match[1]);
        
        auto deferred_func = [&]() {
            return factorial(n);
        };
            return deferred_func;

    }
    std::optional<int> gcd_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*gcd\s*\(\s*(-?\d+)\s*,\s*(-?\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stoi(s); };
            int a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stoi(s); };
            int b = conversion2(match[2]);
        
            int result = gcd(a, b);
            return result;

    }
    std::optional<std::function<int()>> gcd_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*gcd\s*\(\s*(-?\d+)\s*,\s*(-?\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stoi(s); };
            int a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stoi(s); };
            int b = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return gcd(a, b);
        };
            return deferred_func;

    }
    std::optional<int> lcm_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*lcm\s*\(\s*(-?\d+)\s*,\s*(-?\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stoi(s); };
            int a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stoi(s); };
            int b = conversion2(match[2]);
        
            int result = lcm(a, b);
            return result;

    }
    std::optional<std::function<int()>> lcm_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*lcm\s*\(\s*(-?\d+)\s*,\s*(-?\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stoi(s); };
            int a = conversion1(match[1]);
            auto conversion2 = [](const std::string &s) { return std::stoi(s); };
            int b = conversion2(match[2]);
        
        auto deferred_func = [&]() {
            return lcm(a, b);
        };
            return deferred_func;

    }
    std::optional<double> square_root_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*square_root\s*\(\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double x = conversion1(match[1]);
        
            double result = square_root(x);
            return result;

    }
    std::optional<std::function<double()>> square_root_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*square_root\s*\(\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double x = conversion1(match[1]);
        
        auto deferred_func = [&]() {
            return square_root(x);
        };
            return deferred_func;

    }
    std::optional<double> absolute_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*absolute\s*\(\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double x = conversion1(match[1]);
        
            double result = absolute(x);
            return result;

    }
    std::optional<std::function<double()>> absolute_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*absolute\s*\(\s*(-?\d+(?:\.\d+)?)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return std::stod(s); };
            double x = conversion1(match[1]);
        
        auto deferred_func = [&]() {
            return absolute(x);
        };
            return deferred_func;

    }
    std::optional<unsigned int> fibonacci_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*fibonacci\s*\(\s*(\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            unsigned int n = conversion1(match[1]);
        
            unsigned int result = fibonacci(n);
            return result;

    }
    std::optional<std::function<unsigned int()>> fibonacci_deferred_string_invoker(std::string &invocation) {
        std::regex re(R"(^\s*fibonacci\s*\(\s*(\d+)\s*\)\s*$)");
            std::smatch match;
            if (!std::regex_match(invocation, match, re)) return std::nullopt;
        
            auto conversion1 = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            unsigned int n = conversion1(match[1]);
        
        auto deferred_func = [&]() {
            return fibonacci(n);
        };
            return deferred_func;

    }
    std::optional<std::string> add_string_invoker_to_string(std::string &input) {
        auto opt_result = add_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> subtract_string_invoker_to_string(std::string &input) {
        auto opt_result = subtract_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> multiply_string_invoker_to_string(std::string &input) {
        auto opt_result = multiply_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> divide_string_invoker_to_string(std::string &input) {
        auto opt_result = divide_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> power_string_invoker_to_string(std::string &input) {
        auto opt_result = power_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> factorial_string_invoker_to_string(std::string &input) {
        auto opt_result = factorial_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const unsigned int &v) { return std::to_string(v); };
            return conversion(*opt_result);

    }
    std::optional<std::string> gcd_string_invoker_to_string(std::string &input) {
        auto opt_result = gcd_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const int &v) { return std::to_string(v); };
            return conversion(*opt_result);

    }
    std::optional<std::string> lcm_string_invoker_to_string(std::string &input) {
        auto opt_result = lcm_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const int &v) { return std::to_string(v); };
            return conversion(*opt_result);

    }
    std::optional<std::string> square_root_string_invoker_to_string(std::string &input) {
        auto opt_result = square_root_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> absolute_string_invoker_to_string(std::string &input) {
        auto opt_result = absolute_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
            return conversion(*opt_result);

    }
    std::optional<std::string> fibonacci_string_invoker_to_string(std::string &input) {
        auto opt_result = fibonacci_string_invoker(input);
            if (!opt_result) return std::nullopt;
            auto conversion = [](const unsigned int &v) { return std::to_string(v); };
            return conversion(*opt_result);

    }
};



} // namespace meta_basic_math

#endif // META_BASIC_MATH_HPP
