#ifndef STRING_INVOKER_HPP
#define STRING_INVOKER_HPP

#include "basic_math.hpp"

namespace string_invoker {

extern std::vector<meta_utils::MetaFunctionSignature> all_meta_function_signatures;

std::optional<std::string> invoker_that_returns_std_string(std::string invocation);
std::optional<double> invoker_that_returns_double(std::string invocation);
std::optional<long> invoker_that_returns_long(std::string invocation);
std::optional<int> invoker_that_returns_int(std::string invocation);

} // namespace string_invoker

#endif // STRING_INVOKER_HPP
