#include "string_invoker.hpp"

namespace string_invoker {

std::vector<meta_utils::MetaFunctionSignature> all_meta_function_signatures = {basic_math_string_invokers::mfs_add, basic_math_string_invokers::mfs_subtract, basic_math_string_invokers::mfs_multiply, basic_math_string_invokers::mfs_divide, basic_math_string_invokers::mfs_power, basic_math_string_invokers::mfs_factorial, basic_math_string_invokers::mfs_gcd, basic_math_string_invokers::mfs_lcm, basic_math_string_invokers::mfs_square_root, basic_math_string_invokers::mfs_absolute, basic_math_string_invokers::mfs_fibonacci};

std::optional<std::string> invoker_that_returns_std_string(std::string invocation) {
std::optional<std::string> val;
val = basic_math_string_invokers::invoker_that_returns_std_string(invocation);
if (val)
    return val;

return std::nullopt;
}

std::optional<double> invoker_that_returns_double(std::string invocation) {
std::optional<double> val;
val = basic_math_string_invokers::invoker_that_returns_double(invocation);
if (val)
    return val;

return std::nullopt;
}

std::optional<long> invoker_that_returns_long(std::string invocation) {
std::optional<long> val;
val = basic_math_string_invokers::invoker_that_returns_long(invocation);
if (val)
    return val;

return std::nullopt;
}

std::optional<int> invoker_that_returns_int(std::string invocation) {
std::optional<int> val;
val = basic_math_string_invokers::invoker_that_returns_int(invocation);
if (val)
    return val;

return std::nullopt;
}

} // namespace string_invoker
