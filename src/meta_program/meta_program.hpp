#ifndef META_PROGRAM_HPP
#define META_PROGRAM_HPP

#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../meta/basic_math.hpp"
#include <optional>
#include "../utility/meta_utils/meta_utils.hpp"
#include "../utility/user_input/user_input.hpp"
#include "../utility/lazy_construction/lazy_construction.hpp"

class MetaProgram {
public:
        MetaProgram(std::vector<meta_utils::MetaType> concrete_types) : concrete_types(concrete_types) {
        }

public:
    std::vector<meta_utils::MetaType>  concrete_types;
    meta_basic_math::MetaBasicMath meta_basic_math{concrete_types};
    std::string char_to_string(char &v) {
        return std::to_string(v);

    }
    char string_to_char(std::string &s) {
        return static_cast<char>(s.empty() ? 0 : s[0]);

    }
    std::vector<uint8_t> serialize_char(char &v) {
        std::vector<uint8_t> buf(sizeof(char));   std::memcpy(buf.data(), &v, sizeof(char));   return buf;

    }
    size_t size_when_serialized_char(char &v) {
        return sizeof(char);

    }
    char deserialize_char(std::vector<uint8_t> &buf) {
        char v;   std::memcpy(&v, buf.data(), sizeof(char));   return v;

    }
    std::string int_to_string(int &v) {
        return std::to_string(v);

    }
    int string_to_int(std::string &s) {
        return std::stoi(s);

    }
    std::vector<uint8_t> serialize_int(int &v) {
        std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf;

    }
    size_t size_when_serialized_int(int &v) {
        return sizeof(int);

    }
    int deserialize_int(std::vector<uint8_t> &buf) {
        int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v;

    }
    std::string unsigned_int_to_string(unsigned int &v) {
        return std::to_string(v);

    }
    unsigned int string_to_unsigned_int(std::string &s) {
        return static_cast<unsigned int>(std::stoul(s));

    }
    std::vector<uint8_t> serialize_unsigned_int(unsigned int &v) {
        std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf;

    }
    size_t size_when_serialized_unsigned_int(unsigned int &v) {
        return sizeof(unsigned int);

    }
    unsigned int deserialize_unsigned_int(std::vector<uint8_t> &buf) {
        unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v;

    }
    std::string uint8_t_to_string(uint8_t &v) {
        return std::to_string(v);

    }
    uint8_t string_to_uint8_t(std::string &s) {
        return static_cast<uint8_t>(std::stoul(s));

    }
    std::vector<uint8_t> serialize_uint8_t(uint8_t &v) {
        std::vector<uint8_t> buf(sizeof(uint8_t));   std::memcpy(buf.data(), &v, sizeof(uint8_t));   return buf;

    }
    size_t size_when_serialized_uint8_t(uint8_t &v) {
        return sizeof(uint8_t);

    }
    uint8_t deserialize_uint8_t(std::vector<uint8_t> &buf) {
        uint8_t v;   std::memcpy(&v, buf.data(), sizeof(uint8_t));   return v;

    }
    std::string uint32_t_to_string(uint32_t &v) {
        return std::to_string(v);

    }
    uint32_t string_to_uint32_t(std::string &s) {
        return static_cast<uint32_t>(std::stoul(s));

    }
    std::vector<uint8_t> serialize_uint32_t(uint32_t &v) {
        std::vector<uint8_t> buf(sizeof(uint32_t));   std::memcpy(buf.data(), &v, sizeof(uint32_t));   return buf;

    }
    size_t size_when_serialized_uint32_t(uint32_t &v) {
        return sizeof(uint32_t);

    }
    uint32_t deserialize_uint32_t(std::vector<uint8_t> &buf) {
        uint32_t v;   std::memcpy(&v, buf.data(), sizeof(uint32_t));   return v;

    }
    std::string size_t_to_string(size_t &v) {
        return std::to_string(v);

    }
    size_t string_to_size_t(std::string &s) {
        return static_cast<size_t>(std::stoull(s));

    }
    std::vector<uint8_t> serialize_size_t(size_t &v) {
        std::vector<uint8_t> buf(sizeof(size_t));   std::memcpy(buf.data(), &v, sizeof(size_t));   return buf;

    }
    size_t size_when_serialized_size_t(size_t &v) {
        return sizeof(size_t);

    }
    size_t deserialize_size_t(std::vector<uint8_t> &buf) {
        size_t v;   std::memcpy(&v, buf.data(), sizeof(size_t));   return v;

    }
    std::string float_to_string(float &v) {
        std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();

    }
    float string_to_float(std::string &s) {
        return std::stof(s);

    }
    std::vector<uint8_t> serialize_float(float &v) {
        std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf;

    }
    size_t size_when_serialized_float(float &v) {
        return sizeof(float);

    }
    float deserialize_float(std::vector<uint8_t> &buf) {
        float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v;

    }
    std::string double_to_string(double &v) {
        std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();

    }
    double string_to_double(std::string &s) {
        return std::stod(s);

    }
    std::vector<uint8_t> serialize_double(double &v) {
        std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf;

    }
    size_t size_when_serialized_double(double &v) {
        return sizeof(double);

    }
    double deserialize_double(std::vector<uint8_t> &buf) {
        double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v;

    }
    std::string short_to_string(short &v) {
        return std::to_string(v);

    }
    short string_to_short(std::string &s) {
        return static_cast<short>(std::stoi(s));

    }
    std::vector<uint8_t> serialize_short(short &v) {
        std::vector<uint8_t> buf(sizeof(short));   std::memcpy(buf.data(), &v, sizeof(short));   return buf;

    }
    size_t size_when_serialized_short(short &v) {
        return sizeof(short);

    }
    short deserialize_short(std::vector<uint8_t> &buf) {
        short v;   std::memcpy(&v, buf.data(), sizeof(short));   return v;

    }
    std::string long_to_string(long &v) {
        return std::to_string(v);

    }
    long string_to_long(std::string &s) {
        return std::stol(s);

    }
    std::vector<uint8_t> serialize_long(long &v) {
        std::vector<uint8_t> buf(sizeof(long));   std::memcpy(buf.data(), &v, sizeof(long));   return buf;

    }
    size_t size_when_serialized_long(long &v) {
        return sizeof(long);

    }
    long deserialize_long(std::vector<uint8_t> &buf) {
        long v;   std::memcpy(&v, buf.data(), sizeof(long));   return v;

    }
    std::string std_string_to_string(std::string &s) {
        return s;

    }
    std::string string_to_std_string(std::string &s) {
        if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s;

    }
    std::vector<uint8_t> serialize_std_string(std::string &v) {
        std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf;

    }
    size_t size_when_serialized_std_string(std::string &v) {
        return sizeof(size_t) + v.size();

    }
    std::string deserialize_std_string(std::vector<uint8_t> &buf) {
        if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len);

    }
    std::string std_filesystem_path_to_string(std::filesystem::path &p) {
        return p.string();

    }
    std::filesystem::path string_to_std_filesystem_path(std::string &s) {
        if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return std::filesystem::path(s.substr(1, s.size() - 2));   return std::filesystem::path(s);

    }
    std::vector<uint8_t> serialize_std_filesystem_path(std::filesystem::path &p) {
        std::string s = p.string();   std::vector<uint8_t> buf;   size_t len = s.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), s.data(), len);   return buf;

    }
    size_t size_when_serialized_std_filesystem_path(std::filesystem::path &p) {
        std::string s = p.string();   return sizeof(size_t) + s.size();

    }
    std::filesystem::path deserialize_std_filesystem_path(std::vector<uint8_t> &buf) {
        if (buf.size() < sizeof(size_t)) return std::filesystem::path();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::filesystem::path();   return std::filesystem::path(std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len));

    }
    std::string bool_to_string(bool &v) {
        return v ? "true" : "false";

    }
    bool string_to_bool(std::string &s) {
        return s == "true";

    }
    std::vector<uint8_t> serialize_bool(bool &v) {
        std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf;

    }
    size_t size_when_serialized_bool(bool &v) {
        return sizeof(uint8_t);

    }
    bool deserialize_bool(std::vector<uint8_t> &buf) {
        return buf[0] != 0;

    }
    std::string meta_utils_MetaType_to_string() {
        return "";

    }
    meta_utils::MetaType string_to_meta_utils_MetaType(meta_utils::MetaType &mt) {

    }
    std::vector<uint8_t> serialize_meta_utils_MetaType() {

    }
    size_t size_when_serialized_meta_utils_MetaType(meta_utils::MetaType &v) {
        return sizeof(meta_utils::MetaType);

    }
    meta_utils::MetaType deserialize_meta_utils_MetaType() {

    }
    std::string MyVectorInt_to_string(std::vector<int> vec) {
        std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();

    }
    std::vector<int> string_to_MyVectorInt(std::string &input) {
        std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;

    }
    std::vector<uint8_t> serialize_MyVectorInt(std::vector<int> vec) {
        std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;

    }
    size_t size_when_serialized_MyVectorInt(std::vector<int> vec) {
        size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;

    }
    std::vector<int> deserialize_MyVectorInt(std::vector<uint8_t> buffer) {
        std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;

    }
    std::string MyArrayOfFloats_to_string(std::array<float, 4> arr) {
        std::ostringstream oss;
            oss << "{";
            auto conversion = [](const float &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();};
        
            for (size_t i = 0; i < arr.size(); ++i) {
                oss << conversion(arr[i]);
                if (i + 1 < arr.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();

    }
    std::array<float, 4> string_to_MyArrayOfFloats(std::string &input) {
        std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::array<float, 4> result{};
            std::regex element_re(R"(-?\d+(?:\.\d+)?)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            size_t idx = 0;
            for (auto it = begin; it != end && idx < 4; ++it, ++idx) {
                try {
                    auto conversion = [](const std::string &s) { return std::stof(s); };
                    result[idx] = conversion(it->str());
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;

    }
    std::vector<uint8_t> serialize_MyArrayOfFloats(std::array<float, 4> arr) {
        std::vector<uint8_t> buffer;
            auto element_serializer = [](const float &v) {   std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf; };
            if (!arr.empty()) {
                size_t elem_size = sizeof(float);
                buffer.resize(buffer.size() + arr.size() * elem_size);
                std::memcpy(buffer.data(), arr.data(), arr.size() * elem_size);
            }
            return buffer;

    }
    size_t size_when_serialized_MyArrayOfFloats(std::array<float, 4> arr) {
        size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;

    }
    std::array<float, 4> deserialize_MyArrayOfFloats(std::vector<uint8_t> buffer) {
        std::array<float, 4> result{};
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v; };
        
            size_t offset = 0;
            size_t elem_size = sizeof(float);
            if (buffer.size() < 4 * elem_size) return result;
            for (size_t i = 0; i < 4; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                result[i] = element_deserializer(elem_buf);
                offset += elem_size;
            }
            return result;

    }
    std::string A_to_string(A value) {
        switch(value) {
                case A::ONE: return "A::ONE";
                case A::TWO: return "A::TWO";
                case A::THREE: return "A::THREE";
                default: return "<unknown A>";
            }

    }
    A string_to_A(std::string &s) {
        if (s == "A::ONE") return A::ONE;
            if (s == "A::TWO") return A::TWO;
            if (s == "A::THREE") return A::THREE;
            return static_cast<A>(0); // default fallback

    }
    std::vector<uint8_t> serialize_A(A value) {
        std::vector<uint8_t> buffer(sizeof(uint8_t));
            uint8_t raw = static_cast<uint8_t>(value);
            std::memcpy(buffer.data(), &raw, sizeof(uint8_t));
            return buffer;

    }
    size_t size_when_serialized_A(A &obj) {
        return sizeof(uint8_t);

    }
    A deserialize_A(std::vector<uint8_t> &buffer) {
        if (buffer.size() < sizeof(uint8_t)) return static_cast<A>(0);
            uint8_t raw = 0;
            std::memcpy(&raw, buffer.data(), sizeof(uint8_t));
            return static_cast<A>(raw);

    }
    std::string B_to_string(B obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "mvi=" << conv(obj.mvi); }
            oss << ", ";
            { auto conv = [=](const std::array<float, 3>& arr) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const float &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();};
        
            for (size_t i = 0; i < arr.size(); ++i) {
                oss << conversion(arr[i]);
                if (i + 1 < arr.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "position=" << conv(obj.position); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "s=" << conv(obj.s); }
            oss << "}";
            return oss.str();

    }
    B string_to_B(std::string &s) {
        B obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.mvi = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::array<float, 3> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::array<float, 3> result{};
            std::regex element_re(R"(-?\d+(?:\.\d+)?)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            size_t idx = 0;
            for (auto it = begin; it != end && idx < 3; ++it, ++idx) {
                try {
                    auto conversion = [](const std::string &s) { return std::stof(s); };
                    result[idx] = conversion(it->str());
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.position = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.s = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_B(B obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.mvi);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::array<float, 3>& arr) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            auto element_serializer = [](const float &v) {   std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf; };
            if (!arr.empty()) {
                size_t elem_size = sizeof(float);
                buffer.resize(buffer.size() + arr.size() * elem_size);
                std::memcpy(buffer.data(), arr.data(), arr.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.position);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.s);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_B(B obj) {
        size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.mvi); }
            { auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              total += size_fn(obj.position); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.s); }
            return total;

    }
    B deserialize_B(std::vector<uint8_t> &buffer) {
        B obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.mvi = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::array<float, 3> {
            std::array<float, 3> result{};
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v; };
        
            size_t offset = 0;
            size_t elem_size = sizeof(float);
            if (buffer.size() < 3 * elem_size) return result;
            for (size_t i = 0; i < 3; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                result[i] = element_deserializer(elem_buf);
                offset += elem_size;
            }
            return result;
        };
              auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              size_t len = size_fn(obj.position);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.position = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.s = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string X_to_string(X obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "text=" << conv(obj.text); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "numbers=" << conv(obj.numbers); }
            oss << ", ";
            { auto conv = [=](const B& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "mvi=" << conv(obj.mvi); }
            oss << ", ";
            { auto conv = [=](const std::array<float, 3>& arr) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const float &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();};
        
            for (size_t i = 0; i < arr.size(); ++i) {
                oss << conversion(arr[i]);
                if (i + 1 < arr.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "position=" << conv(obj.position); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "s=" << conv(obj.s); }
            oss << "}";
            return oss.str();
        };
              oss << "b=" << conv(obj.b); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_it=" << conv(obj.is_it); }
            oss << "}";
            return oss.str();

    }
    X string_to_X(std::string &s) {
        X obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.text = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.numbers = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> B {
            B obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.mvi = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::array<float, 3> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::array<float, 3> result{};
            std::regex element_re(R"(-?\d+(?:\.\d+)?)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            size_t idx = 0;
            for (auto it = begin; it != end && idx < 3; ++it, ++idx) {
                try {
                    auto conversion = [](const std::string &s) { return std::stof(s); };
                    result[idx] = conversion(it->str());
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.position = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.s = conv(value_str);
                }
            }
            return obj;
        };
                    obj.b = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_it = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_X(X obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.text);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.numbers);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const B& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.mvi);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::array<float, 3>& arr) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            auto element_serializer = [](const float &v) {   std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf; };
            if (!arr.empty()) {
                size_t elem_size = sizeof(float);
                buffer.resize(buffer.size() + arr.size() * elem_size);
                std::memcpy(buffer.data(), arr.data(), arr.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.position);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.s);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.b);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_it);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_X(X obj) {
        size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.text); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.numbers); }
            { auto size_fn = [=](const B& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.mvi); }
            { auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              total += size_fn(obj.position); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.s); }
            return total;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.b); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_it); }
            return total;

    }
    X deserialize_X(std::vector<uint8_t> &buffer) {
        X obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.text = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.numbers = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> B {
            B obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.mvi = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::array<float, 3> {
            std::array<float, 3> result{};
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v; };
        
            size_t offset = 0;
            size_t elem_size = sizeof(float);
            if (buffer.size() < 3 * elem_size) return result;
            for (size_t i = 0; i < 3; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                result[i] = element_deserializer(elem_buf);
                offset += elem_size;
            }
            return result;
        };
              auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              size_t len = size_fn(obj.position);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.position = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.s = deser(slice);
              offset += len;
            }
            return obj;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.b = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_it);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_it = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string Y_to_string(Y obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const std::string &s) { return s; };
              oss << "name=" << conv(obj.name); }
            oss << ", ";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "age=" << conv(obj.age); }
            oss << ", ";
            { auto conv = [=](A value) -> std::string {
            switch(value) {
                case A::ONE: return "A::ONE";
                case A::TWO: return "A::TWO";
                case A::THREE: return "A::THREE";
                default: return "<unknown A>";
            }
        };
              oss << "thing=" << conv(obj.thing); }
            oss << ", ";
            { auto conv = [=](const std::vector<X>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [=](const X& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "text=" << conv(obj.text); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "numbers=" << conv(obj.numbers); }
            oss << ", ";
            { auto conv = [=](const B& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "mvi=" << conv(obj.mvi); }
            oss << ", ";
            { auto conv = [=](const std::array<float, 3>& arr) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const float &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();};
        
            for (size_t i = 0; i < arr.size(); ++i) {
                oss << conversion(arr[i]);
                if (i + 1 < arr.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "position=" << conv(obj.position); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "s=" << conv(obj.s); }
            oss << "}";
            return oss.str();
        };
              oss << "b=" << conv(obj.b); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_it=" << conv(obj.is_it); }
            oss << "}";
            return oss.str();
        };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "xs=" << conv(obj.xs); }
            oss << "}";
            return oss.str();

    }
    Y string_to_Y(std::string &s) {
        Y obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.name = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.age = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> A {
            if (s == "A::ONE") return A::ONE;
            if (s == "A::TWO") return A::TWO;
            if (s == "A::THREE") return A::THREE;
            return static_cast<A>(0); // default fallback
        };
                    obj.thing = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<X> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<X> result;
            std::regex element_re(R"(.*)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [=](const std::string &s) -> X {
            X obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.text = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.numbers = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> B {
            B obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.mvi = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::array<float, 3> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::array<float, 3> result{};
            std::regex element_re(R"(-?\d+(?:\.\d+)?)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            size_t idx = 0;
            for (auto it = begin; it != end && idx < 3; ++it, ++idx) {
                try {
                    auto conversion = [](const std::string &s) { return std::stof(s); };
                    result[idx] = conversion(it->str());
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.position = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.s = conv(value_str);
                }
            }
            return obj;
        };
                    obj.b = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_it = conv(value_str);
                }
            }
            return obj;
        };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.xs = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_Y(Y obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.name);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.age);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](A value) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer(sizeof(uint8_t));
            uint8_t raw = static_cast<uint8_t>(value);
            std::memcpy(buffer.data(), &raw, sizeof(uint8_t));
            return buffer;
        };
              auto bytes = ser(obj.thing);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<X>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [=](const X& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.text);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.numbers);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const B& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.mvi);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::array<float, 3>& arr) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            auto element_serializer = [](const float &v) {   std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf; };
            if (!arr.empty()) {
                size_t elem_size = sizeof(float);
                buffer.resize(buffer.size() + arr.size() * elem_size);
                std::memcpy(buffer.data(), arr.data(), arr.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.position);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.s);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.b);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_it);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                size_t elem_size = elem_bytes.size();
                // increase the active buffers size so we can fit the next object in
                buffer.resize(buffer.size() + sizeof(size_t));
                // copy in the size of the object we're about to insert before that object
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &elem_size, sizeof(size_t));
                // dump the object in
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.xs);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_Y(Y obj) {
        size_t total = 0;
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.name); }
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.age); }
            { auto size_fn = [=](const A &obj) -> size_t {
            return sizeof(uint8_t);
        };
              total += size_fn(obj.thing); }
            { auto size_fn = [=](const std::vector<X>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            auto element_size_func = [=](const X& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.text); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.numbers); }
            { auto size_fn = [=](const B& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.mvi); }
            { auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              total += size_fn(obj.position); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.s); }
            return total;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.b); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_it); }
            return total;
        };
            for (const auto& elem : vec) {
                size_t elem_size = element_size_func(elem);
                total_size += sizeof(size_t) + elem_size; // size prefix + data
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.xs); }
            return total;

    }
    Y deserialize_Y(std::vector<uint8_t> &buffer) {
        Y obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.name = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.age);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.age = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> A {
            if (buffer.size() < sizeof(uint8_t)) return static_cast<A>(0);
            uint8_t raw = 0;
            std::memcpy(&raw, buffer.data(), sizeof(uint8_t));
            return static_cast<A>(raw);
        };
              auto size_fn = [=](const A &obj) -> size_t {
            return sizeof(uint8_t);
        };
              size_t len = size_fn(obj.thing);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.thing = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<X> {
            std::vector<X> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [=](const std::vector<uint8_t> &buffer) -> X {
            X obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.text = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.numbers = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> B {
            B obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.mvi = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::array<float, 3> {
            std::array<float, 3> result{};
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v; };
        
            size_t offset = 0;
            size_t elem_size = sizeof(float);
            if (buffer.size() < 3 * elem_size) return result;
            for (size_t i = 0; i < 3; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                result[i] = element_deserializer(elem_buf);
                offset += elem_size;
            }
            return result;
        };
              auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              size_t len = size_fn(obj.position);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.position = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.s = deser(slice);
              offset += len;
            }
            return obj;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.b = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_it);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_it = deser(slice);
              offset += len;
            }
            return obj;
        };
            for (size_t i = 0; i < count; ++i) {
                // element is variably sized: read elem_size first
                if (offset + sizeof(size_t) > buffer.size()) break;
                size_t elem_size;
                std::memcpy(&elem_size, buffer.data() + offset, sizeof(size_t));
                offset += sizeof(size_t);
                if (offset + elem_size > buffer.size()) break;
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                X elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.xs = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string ClassWithUnorderedMap_to_string(ClassWithUnorderedMap obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [=](const std::unordered_map<unsigned int, X>& map) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto key_conv = [](const unsigned int &v) { return std::to_string(v); };
            auto val_conv = [=](const X& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "text=" << conv(obj.text); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "numbers=" << conv(obj.numbers); }
            oss << ", ";
            { auto conv = [=](const B& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "mvi=" << conv(obj.mvi); }
            oss << ", ";
            { auto conv = [=](const std::array<float, 3>& arr) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const float &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();};
        
            for (size_t i = 0; i < arr.size(); ++i) {
                oss << conversion(arr[i]);
                if (i + 1 < arr.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "position=" << conv(obj.position); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "s=" << conv(obj.s); }
            oss << "}";
            return oss.str();
        };
              oss << "b=" << conv(obj.b); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_it=" << conv(obj.is_it); }
            oss << "}";
            return oss.str();
        };
        
            bool first = true;
            for (const auto& kv : map) {
                if (!first) oss << ", ";
                oss << key_conv(kv.first) << ":" << val_conv(kv.second);
                first = false;
            }
            oss << "}";
            return oss.str();
        };
              oss << "map=" << conv(obj.map); }
            oss << "}";
            return oss.str();

    }
    ClassWithUnorderedMap string_to_ClassWithUnorderedMap(std::string &s) {
        ClassWithUnorderedMap obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::unordered_map<unsigned int, X> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::unordered_map<unsigned int, X> result;
            std::regex pair_re(R"(([^:]+):([^,]+))"); // simple key:value parser
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), pair_re);
            auto end = std::sregex_iterator();
        
            auto key_conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            auto val_conv = [=](const std::string &s) -> X {
            X obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.text = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.numbers = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> B {
            B obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.mvi = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::array<float, 3> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::array<float, 3> result{};
            std::regex element_re(R"(-?\d+(?:\.\d+)?)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            size_t idx = 0;
            for (auto it = begin; it != end && idx < 3; ++it, ++idx) {
                try {
                    auto conversion = [](const std::string &s) { return std::stof(s); };
                    result[idx] = conversion(it->str());
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.position = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.s = conv(value_str);
                }
            }
            return obj;
        };
                    obj.b = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_it = conv(value_str);
                }
            }
            return obj;
        };
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto key = key_conv(it->str(1));
                    auto val = val_conv(it->str(2));
                    result[key] = val;
                } catch (...) {
                    // ignore malformed pairs
                }
            }
            return result;
        };
                    obj.map = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_ClassWithUnorderedMap(ClassWithUnorderedMap obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [=](const std::unordered_map<unsigned int, X>& map) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            size_t count = map.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto key_ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
            auto val_ser = [=](const X& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.text);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.numbers);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const B& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.mvi);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::array<float, 3>& arr) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            auto element_serializer = [](const float &v) {   std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf; };
            if (!arr.empty()) {
                size_t elem_size = sizeof(float);
                buffer.resize(buffer.size() + arr.size() * elem_size);
                std::memcpy(buffer.data(), arr.data(), arr.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.position);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.s);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.b);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_it);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
        
            for (const auto& kv : map) {
                auto key_bytes = key_ser(kv.first);
                auto val_bytes = val_ser(kv.second);
                size_t key_size = key_bytes.size();
                size_t val_size = val_bytes.size();
                buffer.resize(buffer.size() + sizeof(size_t) * 2);
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t) * 2, &key_size, sizeof(size_t));
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &val_size, sizeof(size_t));
                buffer.insert(buffer.end(), key_bytes.begin(), key_bytes.end());
                buffer.insert(buffer.end(), val_bytes.begin(), val_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.map);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_ClassWithUnorderedMap(ClassWithUnorderedMap obj) {
        size_t total = 0;
            { auto size_fn = [=](const std::unordered_map<unsigned int, X>& map) -> size_t {
            size_t total = sizeof(size_t);
            auto key_size_func = [](const unsigned int &v) { return sizeof(unsigned int); };
            auto val_size_func = [=](const X& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.text); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.numbers); }
            { auto size_fn = [=](const B& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.mvi); }
            { auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              total += size_fn(obj.position); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.s); }
            return total;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.b); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_it); }
            return total;
        };
        
            for (const auto& kv : map) {
                total += sizeof(size_t) * 2;
                total += key_size_func(kv.first);
                total += val_size_func(kv.second);
            }
            return total;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.map); }
            return total;

    }
    ClassWithUnorderedMap deserialize_ClassWithUnorderedMap(std::vector<uint8_t> &buffer) {
        ClassWithUnorderedMap obj;
            size_t offset = 0;
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::unordered_map<unsigned int, X> {
            std::unordered_map<unsigned int, X> result;
            if (buffer.size() < sizeof(size_t)) return result;
        
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
            size_t offset = sizeof(size_t);
        
            auto key_deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
            auto val_deser = [=](const std::vector<uint8_t> &buffer) -> X {
            X obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.text = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.numbers = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> B {
            B obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.mvi = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::array<float, 3> {
            std::array<float, 3> result{};
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v; };
        
            size_t offset = 0;
            size_t elem_size = sizeof(float);
            if (buffer.size() < 3 * elem_size) return result;
            for (size_t i = 0; i < 3; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                result[i] = element_deserializer(elem_buf);
                offset += elem_size;
            }
            return result;
        };
              auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              size_t len = size_fn(obj.position);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.position = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.s = deser(slice);
              offset += len;
            }
            return obj;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.b = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_it);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_it = deser(slice);
              offset += len;
            }
            return obj;
        };
        
            for (size_t i = 0; i < count; ++i) {
                if (offset + sizeof(size_t) * 2 > buffer.size()) break;
                size_t key_size, val_size;
                std::memcpy(&key_size, buffer.data() + offset, sizeof(size_t));
                std::memcpy(&val_size, buffer.data() + offset + sizeof(size_t), sizeof(size_t));
                offset += sizeof(size_t) * 2;
                if (offset + key_size + val_size > buffer.size()) break;
                std::vector<uint8_t> key_buf(buffer.begin() + offset, buffer.begin() + offset + key_size);
                offset += key_size;
                std::vector<uint8_t> val_buf(buffer.begin() + offset, buffer.begin() + offset + val_size);
                offset += val_size;
                auto key = key_deser(key_buf);
                auto val = val_deser(val_buf);
                result[key] = val;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.map = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string ClassWithOptional_to_string(ClassWithOptional obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [=](const std::optional<X>& opt) -> std::string {
            if (!opt.has_value()) {
                return "std::nullopt";
            }
        
            auto conversion = [=](const X& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "text=" << conv(obj.text); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "numbers=" << conv(obj.numbers); }
            oss << ", ";
            { auto conv = [=](const B& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const int &v) { return std::to_string(v); };
              oss << "val=" << conv(obj.val); }
            oss << ", ";
            { auto conv = [=](const std::vector<int>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const int &v) { return std::to_string(v); };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "mvi=" << conv(obj.mvi); }
            oss << ", ";
            { auto conv = [=](const std::array<float, 3>& arr) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [](const float &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<float>::max_digits10) << v;  return oss.str();};
        
            for (size_t i = 0; i < arr.size(); ++i) {
                oss << conversion(arr[i]);
                if (i + 1 < arr.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "position=" << conv(obj.position); }
            oss << ", ";
            { auto conv = [](const std::string &s) { return s; };
              oss << "s=" << conv(obj.s); }
            oss << "}";
            return oss.str();
        };
              oss << "b=" << conv(obj.b); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_it=" << conv(obj.is_it); }
            oss << "}";
            return oss.str();
        };
            return conversion(*opt);
        };
              oss << "opt_x=" << conv(obj.opt_x); }
            oss << "}";
            return oss.str();

    }
    ClassWithOptional string_to_ClassWithOptional(std::string &s) {
        ClassWithOptional obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::optional<X> {
            std::string trimmed = input;
            // Trim whitespace
            trimmed.erase(0, trimmed.find_first_not_of(" \t\n\r"));
            trimmed.erase(trimmed.find_last_not_of(" \t\n\r") + 1);
        
            // Explicit representation of null:
            if (trimmed == "std::nullopt") {
                return std::nullopt;
            }
        
            // Try matching actual value
            std::regex element_re(R"(.*)");
            std::smatch match;
        
            if (std::regex_match(trimmed, match, element_re)) {
                try {
                    auto conversion = [=](const std::string &s) -> X {
            X obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.text = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.numbers = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> B {
            B obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stoi(s); };
                    obj.val = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<int> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<int> result;
            std::regex element_re(R"(-?\d+)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [](const std::string &s) { return std::stoi(s); };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.mvi = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::array<float, 3> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::array<float, 3> result{};
            std::regex element_re(R"(-?\d+(?:\.\d+)?)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            size_t idx = 0;
            for (auto it = begin; it != end && idx < 3; ++it, ++idx) {
                try {
                    auto conversion = [](const std::string &s) { return std::stof(s); };
                    result[idx] = conversion(it->str());
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.position = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) {   if (s.size() >= 2 && s.front() == '"' && s.back() == '"')     return s.substr(1, s.size() - 2);   return s; };
                    obj.s = conv(value_str);
                }
            }
            return obj;
        };
                    obj.b = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_it = conv(value_str);
                }
            }
            return obj;
        };
                    return conversion(trimmed);
                } catch (...) {
                    return std::nullopt;
                }
            }
        
            // Anything else is treated as nullopt
            return std::nullopt;
        };
                    obj.opt_x = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_ClassWithOptional(ClassWithOptional obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [=](const std::optional<X>& opt) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
        
            // First byte: 0 = nullopt, 1 = value present
            if (!opt.has_value()) {
                buffer.push_back(0);
                return buffer;
            }
        
            buffer.push_back(1); // value present
            auto element_serializer = [=](const X& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.text);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.numbers);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const B& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
              auto bytes = ser(obj.val);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<int>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.mvi);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::array<float, 3>& arr) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            auto element_serializer = [](const float &v) {   std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf; };
            if (!arr.empty()) {
                size_t elem_size = sizeof(float);
                buffer.resize(buffer.size() + arr.size() * elem_size);
                std::memcpy(buffer.data(), arr.data(), arr.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.position);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const std::string &v) {   std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf; };
              auto bytes = ser(obj.s);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.b);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_it);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
            auto elem_bytes = element_serializer(*opt);
            buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
        
            return buffer;
        };
              auto bytes = ser(obj.opt_x);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_ClassWithOptional(ClassWithOptional obj) {
        size_t total = 0;
            { auto size_fn = [=](const std::optional<X>& opt) -> size_t {
            size_t total_size = 1; // presence flag (1 byte)
        
            if (!opt.has_value()) {
                return total_size; // only the presence flag
            }
        
            // Value is present, delegate to inner type's size function
            auto element_size_func = [=](const X& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.text); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.numbers); }
            { auto size_fn = [=](const B& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const int &v) { return sizeof(int); };
              total += size_fn(obj.val); }
            { auto size_fn = [=](const std::vector<int>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [](const int &v) { return sizeof(int); }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.mvi); }
            { auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              total += size_fn(obj.position); }
            { auto size_fn = [](const std::string &v) { return sizeof(size_t) + v.size(); };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.s); }
            return total;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.b); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_it); }
            return total;
        };
            total_size += element_size_func(*opt);
        
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.opt_x); }
            return total;

    }
    ClassWithOptional deserialize_ClassWithOptional(std::vector<uint8_t> &buffer) {
        ClassWithOptional obj;
            size_t offset = 0;
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::optional<X> {
            if (buffer.empty()) return std::nullopt;  // empty buffer
        
            // First byte indicates presence of value
            uint8_t has_value = buffer[0];
            if (has_value == 0) return std::nullopt;
        
            // Value is present, delegate deserialization to inner type
            auto element_deserializer = [=](const std::vector<uint8_t> &buffer) -> X {
            X obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.text = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.numbers = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> B {
            B obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              auto size_fn = [](const int &v) { return sizeof(int); };
              size_t len = size_fn(obj.val);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.val = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<int> {
            std::vector<int> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            int dummy; 
            auto size_fn = [](const int &v) { return sizeof(int); };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                int elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.mvi = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::array<float, 3> {
            std::array<float, 3> result{};
            auto element_deserializer = [](const std::vector<uint8_t> &buf) {   float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v; };
        
            size_t offset = 0;
            size_t elem_size = sizeof(float);
            if (buffer.size() < 3 * elem_size) return result;
            for (size_t i = 0; i < 3; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                result[i] = element_deserializer(elem_buf);
                offset += elem_size;
            }
            return result;
        };
              auto size_fn = [=](const std::array<float, 3>& arr) -> size_t {
            size_t total_size = 0;
            if (!arr.empty()) {
                total_size += arr.size() * [](const float &v) { return sizeof(float); }(arr[0]);
            }
            return total_size;
        };
              size_t len = size_fn(obj.position);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.position = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len); };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.s = deser(slice);
              offset += len;
            }
            return obj;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.b = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_it);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_it = deser(slice);
              offset += len;
            }
            return obj;
        };
            std::vector<uint8_t> elem_bytes(buffer.begin() + 1, buffer.end());
            return element_deserializer(elem_bytes);
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.opt_x = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string InstagibCTFCharacterLeaderboardState_to_string(InstagibCTFCharacterLeaderboardState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "flag_captures=" << conv(obj.flag_captures); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "kills=" << conv(obj.kills); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "deaths=" << conv(obj.deaths); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "sniper_accuracy=" << conv(obj.sniper_accuracy); }
            oss << "}";
            return oss.str();

    }
    InstagibCTFCharacterLeaderboardState string_to_InstagibCTFCharacterLeaderboardState(std::string &s) {
        InstagibCTFCharacterLeaderboardState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.flag_captures = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.kills = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.deaths = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.sniper_accuracy = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_InstagibCTFCharacterLeaderboardState(InstagibCTFCharacterLeaderboardState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.flag_captures);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.kills);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.deaths);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.sniper_accuracy);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_InstagibCTFCharacterLeaderboardState(InstagibCTFCharacterLeaderboardState obj) {
        size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.flag_captures); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.kills); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.deaths); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.sniper_accuracy); }
            return total;

    }
    InstagibCTFCharacterLeaderboardState deserialize_InstagibCTFCharacterLeaderboardState(std::vector<uint8_t> &buffer) {
        InstagibCTFCharacterLeaderboardState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.flag_captures);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.flag_captures = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.kills);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.kills = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.deaths);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.deaths = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.sniper_accuracy);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.sniper_accuracy = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string InstagibCTFLeaderboardState_to_string(InstagibCTFLeaderboardState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [=](const std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>>& map) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto key_conv = [](const unsigned int &v) { return std::to_string(v); };
            auto val_conv = [=](const std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>& map) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto key_conv = [](const unsigned int &v) { return std::to_string(v); };
            auto val_conv = [=](const InstagibCTFCharacterLeaderboardState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "flag_captures=" << conv(obj.flag_captures); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "kills=" << conv(obj.kills); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "deaths=" << conv(obj.deaths); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "sniper_accuracy=" << conv(obj.sniper_accuracy); }
            oss << "}";
            return oss.str();
        };
        
            bool first = true;
            for (const auto& kv : map) {
                if (!first) oss << ", ";
                oss << key_conv(kv.first) << ":" << val_conv(kv.second);
                first = false;
            }
            oss << "}";
            return oss.str();
        };
        
            bool first = true;
            for (const auto& kv : map) {
                if (!first) oss << ", ";
                oss << key_conv(kv.first) << ":" << val_conv(kv.second);
                first = false;
            }
            oss << "}";
            return oss.str();
        };
              oss << "team_to_client_id_to_instagib_ctf_character_leaderboard_state=" << conv(obj.team_to_client_id_to_instagib_ctf_character_leaderboard_state); }
            oss << "}";
            return oss.str();

    }
    InstagibCTFLeaderboardState string_to_InstagibCTFLeaderboardState(std::string &s) {
        InstagibCTFLeaderboardState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>> result;
            std::regex pair_re(R"(([^:]+):([^,]+))"); // simple key:value parser
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), pair_re);
            auto end = std::sregex_iterator();
        
            auto key_conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            auto val_conv = [=](const std::string &input) -> std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState> result;
            std::regex pair_re(R"(([^:]+):([^,]+))"); // simple key:value parser
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), pair_re);
            auto end = std::sregex_iterator();
        
            auto key_conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
            auto val_conv = [=](const std::string &s) -> InstagibCTFCharacterLeaderboardState {
            InstagibCTFCharacterLeaderboardState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.flag_captures = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.kills = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.deaths = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.sniper_accuracy = conv(value_str);
                }
            }
            return obj;
        };
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto key = key_conv(it->str(1));
                    auto val = val_conv(it->str(2));
                    result[key] = val;
                } catch (...) {
                    // ignore malformed pairs
                }
            }
            return result;
        };
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto key = key_conv(it->str(1));
                    auto val = val_conv(it->str(2));
                    result[key] = val;
                } catch (...) {
                    // ignore malformed pairs
                }
            }
            return result;
        };
                    obj.team_to_client_id_to_instagib_ctf_character_leaderboard_state = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_InstagibCTFLeaderboardState(InstagibCTFLeaderboardState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [=](const std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>>& map) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            size_t count = map.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto key_ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
            auto val_ser = [=](const std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>& map) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            size_t count = map.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto key_ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
            auto val_ser = [=](const InstagibCTFCharacterLeaderboardState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.flag_captures);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.kills);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.deaths);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.sniper_accuracy);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
        
            for (const auto& kv : map) {
                auto key_bytes = key_ser(kv.first);
                auto val_bytes = val_ser(kv.second);
                size_t key_size = key_bytes.size();
                size_t val_size = val_bytes.size();
                buffer.resize(buffer.size() + sizeof(size_t) * 2);
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t) * 2, &key_size, sizeof(size_t));
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &val_size, sizeof(size_t));
                buffer.insert(buffer.end(), key_bytes.begin(), key_bytes.end());
                buffer.insert(buffer.end(), val_bytes.begin(), val_bytes.end());
            }
            return buffer;
        };
        
            for (const auto& kv : map) {
                auto key_bytes = key_ser(kv.first);
                auto val_bytes = val_ser(kv.second);
                size_t key_size = key_bytes.size();
                size_t val_size = val_bytes.size();
                buffer.resize(buffer.size() + sizeof(size_t) * 2);
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t) * 2, &key_size, sizeof(size_t));
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &val_size, sizeof(size_t));
                buffer.insert(buffer.end(), key_bytes.begin(), key_bytes.end());
                buffer.insert(buffer.end(), val_bytes.begin(), val_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.team_to_client_id_to_instagib_ctf_character_leaderboard_state);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_InstagibCTFLeaderboardState(InstagibCTFLeaderboardState obj) {
        size_t total = 0;
            { auto size_fn = [=](const std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>>& map) -> size_t {
            size_t total = sizeof(size_t);
            auto key_size_func = [](const unsigned int &v) { return sizeof(unsigned int); };
            auto val_size_func = [=](const std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>& map) -> size_t {
            size_t total = sizeof(size_t);
            auto key_size_func = [](const unsigned int &v) { return sizeof(unsigned int); };
            auto val_size_func = [=](const InstagibCTFCharacterLeaderboardState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.flag_captures); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.kills); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.deaths); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.sniper_accuracy); }
            return total;
        };
        
            for (const auto& kv : map) {
                total += sizeof(size_t) * 2;
                total += key_size_func(kv.first);
                total += val_size_func(kv.second);
            }
            return total;
        };
        
            for (const auto& kv : map) {
                total += sizeof(size_t) * 2;
                total += key_size_func(kv.first);
                total += val_size_func(kv.second);
            }
            return total;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.team_to_client_id_to_instagib_ctf_character_leaderboard_state); }
            return total;

    }
    InstagibCTFLeaderboardState deserialize_InstagibCTFLeaderboardState(std::vector<uint8_t> &buffer) {
        InstagibCTFLeaderboardState obj;
            size_t offset = 0;
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>> {
            std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>> result;
            if (buffer.size() < sizeof(size_t)) return result;
        
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
            size_t offset = sizeof(size_t);
        
            auto key_deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
            auto val_deser = [=](const std::vector<uint8_t>& buffer) -> std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState> {
            std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState> result;
            if (buffer.size() < sizeof(size_t)) return result;
        
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
            size_t offset = sizeof(size_t);
        
            auto key_deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
            auto val_deser = [=](const std::vector<uint8_t> &buffer) -> InstagibCTFCharacterLeaderboardState {
            InstagibCTFCharacterLeaderboardState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.flag_captures);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.flag_captures = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.kills);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.kills = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.deaths);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.deaths = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.sniper_accuracy);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.sniper_accuracy = deser(slice);
              offset += len;
            }
            return obj;
        };
        
            for (size_t i = 0; i < count; ++i) {
                if (offset + sizeof(size_t) * 2 > buffer.size()) break;
                size_t key_size, val_size;
                std::memcpy(&key_size, buffer.data() + offset, sizeof(size_t));
                std::memcpy(&val_size, buffer.data() + offset + sizeof(size_t), sizeof(size_t));
                offset += sizeof(size_t) * 2;
                if (offset + key_size + val_size > buffer.size()) break;
                std::vector<uint8_t> key_buf(buffer.begin() + offset, buffer.begin() + offset + key_size);
                offset += key_size;
                std::vector<uint8_t> val_buf(buffer.begin() + offset, buffer.begin() + offset + val_size);
                offset += val_size;
                auto key = key_deser(key_buf);
                auto val = val_deser(val_buf);
                result[key] = val;
            }
            return result;
        };
        
            for (size_t i = 0; i < count; ++i) {
                if (offset + sizeof(size_t) * 2 > buffer.size()) break;
                size_t key_size, val_size;
                std::memcpy(&key_size, buffer.data() + offset, sizeof(size_t));
                std::memcpy(&val_size, buffer.data() + offset + sizeof(size_t), sizeof(size_t));
                offset += sizeof(size_t) * 2;
                if (offset + key_size + val_size > buffer.size()) break;
                std::vector<uint8_t> key_buf(buffer.begin() + offset, buffer.begin() + offset + key_size);
                offset += key_size;
                std::vector<uint8_t> val_buf(buffer.begin() + offset, buffer.begin() + offset + val_size);
                offset += val_size;
                auto key = key_deser(key_buf);
                auto val = val_deser(val_buf);
                result[key] = val;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.team_to_client_id_to_instagib_ctf_character_leaderboard_state = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string CameraState_to_string(CameraState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "yaw=" << conv(obj.yaw); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "pitch=" << conv(obj.pitch); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_x=" << conv(obj.last_mouse_position_x); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_y=" << conv(obj.last_mouse_position_y); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_camera_update_data_id_used_to_produce_this_state=" << conv(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            oss << "}";
            return oss.str();

    }
    CameraState string_to_CameraState(std::string &s) {
        CameraState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.yaw = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.pitch = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_x = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_y = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_camera_update_data_id_used_to_produce_this_state = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_CameraState(CameraState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.yaw);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.pitch);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_x);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_y);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_CameraState(CameraState obj) {
        size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;

    }
    CameraState deserialize_CameraState(std::vector<uint8_t> &buffer) {
        CameraState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.yaw);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.yaw = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.pitch);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.pitch = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_x);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_x = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_y);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_y = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_camera_update_data_id_used_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string PhysicsState_to_string(PhysicsState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_physics_update_data_id_to_produce_this_state=" << conv(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            oss << "}";
            return oss.str();

    }
    PhysicsState string_to_PhysicsState(std::string &s) {
        PhysicsState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_physics_update_data_id_to_produce_this_state = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_PhysicsState(PhysicsState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_physics_update_data_id_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_PhysicsState(PhysicsState obj) {
        size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;

    }
    PhysicsState deserialize_PhysicsState(std::vector<uint8_t> &buffer) {
        PhysicsState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_physics_update_data_id_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string FreeForAllCharacterState_to_string(FreeForAllCharacterState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "client_id=" << conv(obj.client_id); }
            oss << ", ";
            { auto conv = [=](const PhysicsState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_physics_update_data_id_to_produce_this_state=" << conv(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            oss << "}";
            return oss.str();
        };
              oss << "physics_state=" << conv(obj.physics_state); }
            oss << ", ";
            { auto conv = [=](const CameraState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "yaw=" << conv(obj.yaw); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "pitch=" << conv(obj.pitch); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_x=" << conv(obj.last_mouse_position_x); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_y=" << conv(obj.last_mouse_position_y); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_camera_update_data_id_used_to_produce_this_state=" << conv(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            oss << "}";
            return oss.str();
        };
              oss << "camera_state=" << conv(obj.camera_state); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_dead=" << conv(obj.is_dead); }
            oss << "}";
            return oss.str();

    }
    FreeForAllCharacterState string_to_FreeForAllCharacterState(std::string &s) {
        FreeForAllCharacterState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.client_id = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> PhysicsState {
            PhysicsState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_physics_update_data_id_to_produce_this_state = conv(value_str);
                }
            }
            return obj;
        };
                    obj.physics_state = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> CameraState {
            CameraState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.yaw = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.pitch = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_x = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_y = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_camera_update_data_id_used_to_produce_this_state = conv(value_str);
                }
            }
            return obj;
        };
                    obj.camera_state = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_dead = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_FreeForAllCharacterState(FreeForAllCharacterState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.client_id);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const PhysicsState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_physics_update_data_id_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.physics_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const CameraState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.yaw);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.pitch);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_x);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_y);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.camera_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_dead);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_FreeForAllCharacterState(FreeForAllCharacterState obj) {
        size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.client_id); }
            { auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.physics_state); }
            { auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.camera_state); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_dead); }
            return total;

    }
    FreeForAllCharacterState deserialize_FreeForAllCharacterState(std::vector<uint8_t> &buffer) {
        FreeForAllCharacterState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.client_id);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.client_id = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> PhysicsState {
            PhysicsState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_physics_update_data_id_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;
        };
              auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              size_t len = size_fn(obj.physics_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.physics_state = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> CameraState {
            CameraState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.yaw);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.yaw = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.pitch);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.pitch = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_x);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_x = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_y);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_y = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_camera_update_data_id_used_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;
        };
              auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              size_t len = size_fn(obj.camera_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.camera_state = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_dead);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_dead = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string InstagibCharacterState_to_string(InstagibCharacterState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "client_id=" << conv(obj.client_id); }
            oss << ", ";
            { auto conv = [=](const PhysicsState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_physics_update_data_id_to_produce_this_state=" << conv(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            oss << "}";
            return oss.str();
        };
              oss << "physics_state=" << conv(obj.physics_state); }
            oss << ", ";
            { auto conv = [=](const CameraState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "yaw=" << conv(obj.yaw); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "pitch=" << conv(obj.pitch); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_x=" << conv(obj.last_mouse_position_x); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_y=" << conv(obj.last_mouse_position_y); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_camera_update_data_id_used_to_produce_this_state=" << conv(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            oss << "}";
            return oss.str();
        };
              oss << "camera_state=" << conv(obj.camera_state); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_dead=" << conv(obj.is_dead); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "has_flag=" << conv(obj.has_flag); }
            oss << "}";
            return oss.str();

    }
    InstagibCharacterState string_to_InstagibCharacterState(std::string &s) {
        InstagibCharacterState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.client_id = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> PhysicsState {
            PhysicsState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_physics_update_data_id_to_produce_this_state = conv(value_str);
                }
            }
            return obj;
        };
                    obj.physics_state = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> CameraState {
            CameraState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.yaw = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.pitch = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_x = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_y = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_camera_update_data_id_used_to_produce_this_state = conv(value_str);
                }
            }
            return obj;
        };
                    obj.camera_state = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_dead = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.has_flag = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_InstagibCharacterState(InstagibCharacterState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.client_id);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const PhysicsState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_physics_update_data_id_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.physics_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const CameraState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.yaw);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.pitch);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_x);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_y);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.camera_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_dead);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.has_flag);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_InstagibCharacterState(InstagibCharacterState obj) {
        size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.client_id); }
            { auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.physics_state); }
            { auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.camera_state); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_dead); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.has_flag); }
            return total;

    }
    InstagibCharacterState deserialize_InstagibCharacterState(std::vector<uint8_t> &buffer) {
        InstagibCharacterState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.client_id);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.client_id = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> PhysicsState {
            PhysicsState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_physics_update_data_id_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;
        };
              auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              size_t len = size_fn(obj.physics_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.physics_state = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> CameraState {
            CameraState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.yaw);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.yaw = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.pitch);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.pitch = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_x);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_x = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_y);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_y = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_camera_update_data_id_used_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;
        };
              auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              size_t len = size_fn(obj.camera_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.camera_state = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_dead);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_dead = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.has_flag);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.has_flag = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::string InstagibCTFGameState_to_string(InstagibCTFGameState obj) {
        std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "id=" << conv(obj.id); }
            oss << ", ";
            { auto conv = [=](const std::vector<InstagibCharacterState>& vec) -> std::string {
            std::ostringstream oss;
            oss << "{";
            auto conversion = [=](const InstagibCharacterState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "client_id=" << conv(obj.client_id); }
            oss << ", ";
            { auto conv = [=](const PhysicsState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_physics_update_data_id_to_produce_this_state=" << conv(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            oss << "}";
            return oss.str();
        };
              oss << "physics_state=" << conv(obj.physics_state); }
            oss << ", ";
            { auto conv = [=](const CameraState& obj) -> std::string {
            std::ostringstream oss;
            oss << "{";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "yaw=" << conv(obj.yaw); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "pitch=" << conv(obj.pitch); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_x=" << conv(obj.last_mouse_position_x); }
            oss << ", ";
            { auto conv = [](const double &v) {  std::ostringstream oss;  oss << std::setprecision(std::numeric_limits<double>::max_digits10) << v;  return oss.str();};
              oss << "last_mouse_position_y=" << conv(obj.last_mouse_position_y); }
            oss << ", ";
            { auto conv = [](const unsigned int &v) { return std::to_string(v); };
              oss << "last_applied_camera_update_data_id_used_to_produce_this_state=" << conv(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            oss << "}";
            return oss.str();
        };
              oss << "camera_state=" << conv(obj.camera_state); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "is_dead=" << conv(obj.is_dead); }
            oss << ", ";
            { auto conv = [](const bool &v) { return v ? "true" : "false"; };
              oss << "has_flag=" << conv(obj.has_flag); }
            oss << "}";
            return oss.str();
        };
        
            for (size_t i = 0; i < vec.size(); ++i) {
                oss << conversion(vec[i]);
                if (i + 1 < vec.size())
                    oss << ", ";
            }
        
            oss << "}";
            return oss.str();
        };
              oss << "character_states=" << conv(obj.character_states); }
            oss << "}";
            return oss.str();

    }
    InstagibCTFGameState string_to_InstagibCTFGameState(std::string &s) {
        InstagibCTFGameState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.id = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &input) -> std::vector<InstagibCharacterState> {
            std::string trimmed = input;
            if (!trimmed.empty() && trimmed.front() == '{' && trimmed.back() == '}') {
                trimmed = trimmed.substr(1, trimmed.size() - 2);
            }
        
            std::vector<InstagibCharacterState> result;
            std::regex element_re(R"(.*)");
            auto begin = std::sregex_iterator(trimmed.begin(), trimmed.end(), element_re);
            auto end = std::sregex_iterator();
        
            for (auto it = begin; it != end; ++it) {
                try {
                    auto conversion = [=](const std::string &s) -> InstagibCharacterState {
            InstagibCharacterState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.client_id = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> PhysicsState {
            PhysicsState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_physics_update_data_id_to_produce_this_state = conv(value_str);
                }
            }
            return obj;
        };
                    obj.physics_state = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [=](const std::string &s) -> CameraState {
            CameraState obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.yaw = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.pitch = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_x = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return std::stod(s); };
                    obj.last_mouse_position_y = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return static_cast<unsigned int>(std::stoul(s)); };
                    obj.last_applied_camera_update_data_id_used_to_produce_this_state = conv(value_str);
                }
            }
            return obj;
        };
                    obj.camera_state = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.is_dead = conv(value_str);
                }
            }
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s == "true"; };
                    obj.has_flag = conv(value_str);
                }
            }
            return obj;
        };
                    result.push_back(conversion(it->str()));
                } catch (...) {
                    // Ignore malformed elements
                }
            }
            return result;
        };
                    obj.character_states = conv(value_str);
                }
            }
            return obj;

    }
    std::vector<uint8_t> serialize_InstagibCTFGameState(InstagibCTFGameState obj) {
        std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.id);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const std::vector<InstagibCharacterState>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            // store vector size first, which is necessary or else we won't know when to stop during deserialization
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [=](const InstagibCharacterState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.client_id);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const PhysicsState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_physics_update_data_id_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.physics_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [=](const CameraState& obj) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.yaw);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.pitch);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_x);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const double &v) {   std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf; };
              auto bytes = ser(obj.last_mouse_position_y);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const unsigned int &v) {   std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf; };
              auto bytes = ser(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
              auto bytes = ser(obj.camera_state);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.is_dead);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            { auto ser = [](const bool &v) {   std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf; };
              auto bytes = ser(obj.has_flag);
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                buffer.insert(buffer.end(), elem_bytes.begin(), elem_bytes.end());
            }
            return buffer;
        };
              auto bytes = ser(obj.character_states);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    size_t size_when_serialized_InstagibCTFGameState(InstagibCTFGameState obj) {
        size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.id); }
            { auto size_fn = [=](const std::vector<InstagibCharacterState>& vec) -> size_t {
            size_t total_size = sizeof(size_t); // space for storing count
            if (!vec.empty()) {
                total_size += vec.size() * [=](const InstagibCharacterState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.client_id); }
            { auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.physics_state); }
            { auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.camera_state); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_dead); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.has_flag); }
            return total;
        }(vec[0]);
            }
            return total_size;
        };
              total += sizeof(size_t); // length prefix
              total += size_fn(obj.character_states); }
            return total;

    }
    InstagibCTFGameState deserialize_InstagibCTFGameState(std::vector<uint8_t> &buffer) {
        InstagibCTFGameState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.id);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.id = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t>& buffer) -> std::vector<InstagibCharacterState> {
            std::vector<InstagibCharacterState> result;
            if (buffer.size() < sizeof(size_t)) return result;
            size_t count;
            std::memcpy(&count, buffer.data(), sizeof(size_t));
        
            size_t offset = sizeof(size_t);
            auto element_deserializer = [=](const std::vector<uint8_t> &buffer) -> InstagibCharacterState {
            InstagibCharacterState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.client_id);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.client_id = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> PhysicsState {
            PhysicsState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_physics_update_data_id_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;
        };
              auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              size_t len = size_fn(obj.physics_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.physics_state = deser(slice);
              offset += len;
            }
            { auto deser = [=](const std::vector<uint8_t> &buffer) -> CameraState {
            CameraState obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.yaw);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.yaw = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.pitch);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.pitch = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_x);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_x = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v; };
              auto size_fn = [](const double &v) { return sizeof(double); };
              size_t len = size_fn(obj.last_mouse_position_y);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_mouse_position_y = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v; };
              auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              size_t len = size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.last_applied_camera_update_data_id_used_to_produce_this_state = deser(slice);
              offset += len;
            }
            return obj;
        };
              auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              size_t len = size_fn(obj.camera_state);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.camera_state = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.is_dead);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.is_dead = deser(slice);
              offset += len;
            }
            { auto deser = [](const std::vector<uint8_t> &buf) {   return buf[0] != 0; };
              auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              size_t len = size_fn(obj.has_flag);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.has_flag = deser(slice);
              offset += len;
            }
            return obj;
        };
            // NOTE: big assumption, assumes the default constructor exists for this object. There's gotta be a better way, what if we made size when serialized take in an optional value.
            InstagibCharacterState dummy; 
            auto size_fn = [=](const InstagibCharacterState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.client_id); }
            { auto size_fn = [=](const PhysicsState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_physics_update_data_id_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.physics_state); }
            { auto size_fn = [=](const CameraState& obj) -> size_t {
            size_t total = 0;
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.yaw); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.pitch); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_x); }
            { auto size_fn = [](const double &v) { return sizeof(double); };
              total += size_fn(obj.last_mouse_position_y); }
            { auto size_fn = [](const unsigned int &v) { return sizeof(unsigned int); };
              total += size_fn(obj.last_applied_camera_update_data_id_used_to_produce_this_state); }
            return total;
        };
              total += size_fn(obj.camera_state); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.is_dead); }
            { auto size_fn = [](const bool &v) { return sizeof(uint8_t); };
              total += size_fn(obj.has_flag); }
            return total;
        };
            size_t elem_size = size_fn(dummy);
            if (offset + count * elem_size > buffer.size()) return result; // safety check
            for (size_t i = 0; i < count; ++i) {
                std::vector<uint8_t> elem_buf(buffer.begin() + offset, buffer.begin() + offset + elem_size);
                InstagibCharacterState elem = element_deserializer(elem_buf);
                result.push_back(elem);
                offset += elem_size;
            }
            return result;
        };
              if (offset + sizeof(size_t) > buffer.size()) return obj;
              size_t len = 0;
              std::memcpy(&len, buffer.data() + offset, sizeof(size_t));
              offset += sizeof(size_t);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.character_states = deser(slice);
              offset += len;
            }
            return obj;

    }
    std::optional<std::string> invoker_that_returns_std_string(std::string &invocation) {
        std::optional<std::string> val;
        val = meta_basic_math.invoker_that_returns_std_string(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<double> invoker_that_returns_double(std::string &invocation) {
        std::optional<double> val;
        val = meta_basic_math.invoker_that_returns_double(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<unsigned int> invoker_that_returns_unsigned_int(std::string &invocation) {
        std::optional<unsigned int> val;
        val = meta_basic_math.invoker_that_returns_unsigned_int(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<int> invoker_that_returns_int(std::string &invocation) {
        std::optional<int> val;
        val = meta_basic_math.invoker_that_returns_int(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<std::function<double()>> deferred_invoker_that_returns_double(std::string &invocation) {
        std::optional<std::function<double()>> val;
        val = meta_basic_math.deferred_invoker_that_returns_double(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<std::function<unsigned int()>> deferred_invoker_that_returns_unsigned_int(std::string &invocation) {
        std::optional<std::function<unsigned int()>> val;
        val = meta_basic_math.deferred_invoker_that_returns_unsigned_int(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<std::function<int()>> deferred_invoker_that_returns_int(std::string &invocation) {
        std::optional<std::function<int()>> val;
        val = meta_basic_math.deferred_invoker_that_returns_int(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    void start_interactive_invoker() {
        std::map<std::string, meta_utils::MetaFunctionSignature> options_dict;
            size_t option_index = 1;
            for (const auto &mfs : meta_basic_math.all_meta_function_signatures) {
                options_dict[std::to_string(option_index++)] = mfs;
            }
            if (options_dict.empty()) {
                std::cout << "No functions available." << std::endl;
                return; // nothing to do
            }
            std::vector<std::pair<std::string, meta_utils::MetaFunctionSignature>> sorted_options(options_dict.begin(), options_dict.end());
            std::sort(sorted_options.begin(), sorted_options.end(), [](const auto &a, const auto &b) { return std::stoi(a.first) < std::stoi(b.first); });
            bool keep_running = true;
            while (keep_running) {
                std::cout << "Select a function to invoke:" << std::endl;
                for (const auto &[key, func] : sorted_options) {
                    std::cout << key << ". " << func.to_string() << std::endl;
                }
                std::cout << "q. Quit" << std::endl;
                std::string choice = get_validated_input( []() {
                    std::cout << "Enter choice: ";
                    std::string s;
                    std::getline(std::cin, s);
                    return text_utils::trim(s);
                },
                [&](const std::string &input) { return input == "q" || options_dict.find(input) != options_dict.end(); }, "Invalid choice. Please try again.");
                if (choice == "q") {
                    std::cout << "Goodbye." << std::endl;
                    break;
                }
                meta_utils::MetaFunctionSignature selected = options_dict[choice];
                std::vector<std::string> args;
                for (const auto &param : selected.parameters) {
                    std::string val = get_input_with_default("Enter value for " + param.name + " (" + param.type.get_type_name() + ")", "0");
                    args.push_back(val);
                }
                std::string invocation = selected.name + "(";
                for (size_t i = 0; i < args.size(); ++i) {
                    invocation += args[i];
                    if (i < args.size() - 1) {
                        invocation += ", ";
                    }
                }
                invocation += ")";
                std::cout << "about to run: " << invocation << std::endl;
                auto result = invoker_that_returns_std_string(invocation);
                if (result.has_value()) {
                    std::cout << "Result: " << result.value() << std::endl;
                } else {
                    std::cout << "Invocation failed." << std::endl;
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
                    std::cout << "Goodbye." << std::endl;
                }
            }

    }
    void list_all_available_functions() {
        std::cout << "--- Functions in namespace: meta_basic_math ---" << std::endl;
            for (const auto &mfs : meta_basic_math.all_meta_function_signatures) {
                std::cout << mfs.to_string() << std::endl;
            }

    }
};


extern LazyConstruction<MetaProgram, std::vector<meta_utils::MetaType>> meta_program;

#endif // META_PROGRAM_HPP
