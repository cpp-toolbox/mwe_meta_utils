#ifndef STRING_INVOKER_BASIC_MATH_HPP
#define STRING_INVOKER_BASIC_MATH_HPP

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
#include <optional>
#include "../utility/meta_utils/meta_utils.hpp"
#include "../basic_math.hpp"

namespace basic_math_string_invokers {

extern meta_utils::MetaFunctionSignature mfs_add;
extern meta_utils::MetaFunctionSignature mfs_subtract;
extern meta_utils::MetaFunctionSignature mfs_multiply;
extern meta_utils::MetaFunctionSignature mfs_divide;
extern meta_utils::MetaFunctionSignature mfs_power;
extern meta_utils::MetaFunctionSignature mfs_factorial;
extern meta_utils::MetaFunctionSignature mfs_gcd;
extern meta_utils::MetaFunctionSignature mfs_lcm;
extern meta_utils::MetaFunctionSignature mfs_square_root;
extern meta_utils::MetaFunctionSignature mfs_absolute;
extern meta_utils::MetaFunctionSignature mfs_fibonacci;

std::optional<int> invoker_that_returns_int(std::string invocation);
std::optional<long> invoker_that_returns_long(std::string invocation);
std::optional<double> invoker_that_returns_double(std::string invocation);
std::optional<std::string> invoker_that_returns_std_string(std::string invocation);
void start_interactive_invoker();
std::optional<double> add_string_invoker(std::string input);
std::optional<double> subtract_string_invoker(std::string input);
std::optional<double> multiply_string_invoker(std::string input);
std::optional<double> divide_string_invoker(std::string input);
std::optional<double> power_string_invoker(std::string input);
std::optional<long> factorial_string_invoker(std::string input);
std::optional<int> gcd_string_invoker(std::string input);
std::optional<int> lcm_string_invoker(std::string input);
std::optional<double> square_root_string_invoker(std::string input);
std::optional<double> absolute_string_invoker(std::string input);
std::optional<long> fibonacci_string_invoker(std::string input);
std::optional<std::string> add_string_invoker_to_string(std::string input);
std::optional<std::string> subtract_string_invoker_to_string(std::string input);
std::optional<std::string> multiply_string_invoker_to_string(std::string input);
std::optional<std::string> divide_string_invoker_to_string(std::string input);
std::optional<std::string> power_string_invoker_to_string(std::string input);
std::optional<std::string> factorial_string_invoker_to_string(std::string input);
std::optional<std::string> gcd_string_invoker_to_string(std::string input);
std::optional<std::string> lcm_string_invoker_to_string(std::string input);
std::optional<std::string> square_root_string_invoker_to_string(std::string input);
std::optional<std::string> absolute_string_invoker_to_string(std::string input);
std::optional<std::string> fibonacci_string_invoker_to_string(std::string input);

} // namespace basic_math_string_invokers

#endif // STRING_INVOKER_BASIC_MATH_HPP
