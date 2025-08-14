#ifndef META_PROGRAM_HPP
#define META_PROGRAM_HPP

#include "../meta/basic_math.hpp"

namespace meta_program {


class MetaProgram {
public:
        MetaProgram(std::vector<meta_utils::MetaType> concrete_types) : concrete_types(concrete_types) {
        }

public:
    std::vector<meta_utils::MetaType>  concrete_types;
    meta_basic_math::MetaBasicMath meta_basic_math{concrete_types};
    std::optional<std::string> invoker_that_returns_std_string(std::string invocation) {
        std::optional<std::string> val;
        val = meta_basic_math.invoker_that_returns_std_string(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<double> invoker_that_returns_double(std::string invocation) {
        std::optional<double> val;
        val = meta_basic_math.invoker_that_returns_double(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<long> invoker_that_returns_long(std::string invocation) {
        std::optional<long> val;
        val = meta_basic_math.invoker_that_returns_long(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<int> invoker_that_returns_int(std::string invocation) {
        std::optional<int> val;
        val = meta_basic_math.invoker_that_returns_int(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
};



} // namespace meta_program

#endif // META_PROGRAM_HPP
