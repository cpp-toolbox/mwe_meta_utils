#ifndef META_PROGRAM_HPP
#define META_PROGRAM_HPP

#include "../custom_type.hpp"
#include "../custom_type.hpp"
#include "../meta/basic_math.hpp"
#include <optional>
#include "../utility/meta_utils/meta_utils.hpp"

namespace meta_program {


class MetaProgram {
public:
        MetaProgram(std::vector<meta_utils::MetaType> concrete_types) : concrete_types(concrete_types) {
        }

public:
    std::vector<meta_utils::MetaType>  concrete_types;
    meta_basic_math::MetaBasicMath meta_basic_math{concrete_types};
    std::string int_to_string(int v) {
        return std::to_string(v);

    }
    int string_to_int(std::string s) {
        return std::stoi(s);

    }
    std::vector<uint8_t> serialize_int(int v) {
        std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf;

    }
    int deserialize_int(std::vector<uint8_t> buf) {
        int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v;

    }
    std::string unsigned_int_to_string(unsigned int v) {
        return std::to_string(v);

    }
    int string_to_unsigned_int(std::string s) {
        return static_cast<unsigned int>(std::stoul(s));

    }
    std::vector<uint8_t> serialize_unsigned_int(unsigned int v) {
        std::vector<uint8_t> buf(sizeof(unsigned int));   std::memcpy(buf.data(), &v, sizeof(unsigned int));   return buf;

    }
    int deserialize_unsigned_int(std::vector<uint8_t> buf) {
        unsigned int v;   std::memcpy(&v, buf.data(), sizeof(unsigned int));   return v;

    }
    std::string uint8_t_to_string(uint8_t v) {
        return std::to_string(v);

    }
    uint8_t string_to_uint8_t(std::string s) {
        return static_cast<uint8_t>(std::stoul(s));

    }
    std::vector<uint8_t> serialize_uint8_t(uint8_t v) {
        std::vector<uint8_t> buf(sizeof(uint8_t));   std::memcpy(buf.data(), &v, sizeof(uint8_t));   return buf;

    }
    uint8_t deserialize_uint8_t(std::vector<uint8_t> buf) {
        uint8_t v;   std::memcpy(&v, buf.data(), sizeof(uint8_t));   return v;

    }
    std::string float_to_string(float v) {
        return std::to_string(v);

    }
    float string_to_float(std::string s) {
        return std::stof(s);

    }
    std::vector<uint8_t> serialize_float(float v) {
        std::vector<uint8_t> buf(sizeof(float));   std::memcpy(buf.data(), &v, sizeof(float));   return buf;

    }
    float deserialize_float(std::vector<uint8_t> buf) {
        float v;   std::memcpy(&v, buf.data(), sizeof(float));   return v;

    }
    std::string double_to_string(double v) {
        return std::to_string(v);

    }
    double string_to_double(std::string s) {
        return std::stod(s);

    }
    std::vector<uint8_t> serialize_double(double v) {
        std::vector<uint8_t> buf(sizeof(double));   std::memcpy(buf.data(), &v, sizeof(double));   return buf;

    }
    double deserialize_double(std::vector<uint8_t> buf) {
        double v;   std::memcpy(&v, buf.data(), sizeof(double));   return v;

    }
    std::string short_to_string(short v) {
        return std::to_string(v);

    }
    short string_to_short(std::string s) {
        return static_cast<short>(std::stoi(s));

    }
    std::vector<uint8_t> serialize_short(short v) {
        std::vector<uint8_t> buf(sizeof(short));   std::memcpy(buf.data(), &v, sizeof(short));   return buf;

    }
    short deserialize_short(std::vector<uint8_t> buf) {
        short v;   std::memcpy(&v, buf.data(), sizeof(short));   return v;

    }
    std::string long_to_string(long v) {
        return std::to_string(v);

    }
    long string_to_long(std::string s) {
        return std::stol(s);

    }
    std::vector<uint8_t> serialize_long(long v) {
        std::vector<uint8_t> buf(sizeof(long));   std::memcpy(buf.data(), &v, sizeof(long));   return buf;

    }
    long deserialize_long(std::vector<uint8_t> buf) {
        long v;   std::memcpy(&v, buf.data(), sizeof(long));   return v;

    }
    std::string std__string_to_string(std::string s) {
        return s;

    }
    std::string string_to_std__string(std::string s) {
        return s;

    }
    std::vector<uint8_t> serialize_std__string(std::string v) {
        std::vector<uint8_t> buf;   size_t len = v.size();   buf.resize(sizeof(size_t) + len);   std::memcpy(buf.data(), &len, sizeof(size_t));   std::memcpy(buf.data() + sizeof(size_t), v.data(), len);   return buf;

    }
    std::string deserialize_std__string(std::vector<uint8_t> buf) {
        if (buf.size() < sizeof(size_t)) return std::string();   size_t len;   std::memcpy(&len, buf.data(), sizeof(size_t));   if (buf.size() < sizeof(size_t) + len) return std::string();   return std::string(reinterpret_cast<const char*>(buf.data() + sizeof(size_t)), len);

    }
    std::string bool_to_string(bool v) {
        return std::to_string(v);

    }
    bool string_to_bool(std::string s) {
        return s == "true" || s == "1";

    }
    std::vector<uint8_t> serialize_bool(bool v) {
        std::vector<uint8_t> buf(1);   buf[0] = v ? 1 : 0;   return buf;

    }
    bool deserialize_bool(std::vector<uint8_t> buf) {
        return buf[0] != 0;

    }
    std::string meta_utils__MetaType_to_string() {
        return "";

    }
    meta_utils::MetaType string_to_meta_utils__MetaType() {

    }
    std::vector<uint8_t> serialize_meta_utils__MetaType() {

    }
    meta_utils::MetaType deserialize_meta_utils__MetaType() {

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
            oss << "}";
            return oss.str();

    }
    X string_to_X(std::string s) {
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
                    auto conv = [](const std::string &s) { return s; };
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
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            if (!vec.empty()) {
                size_t elem_size = sizeof(int);
                buffer.resize(buffer.size() + vec.size() * elem_size);
                std::memcpy(buffer.data() + sizeof(size_t), vec.data(), vec.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.numbers);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;

    }
    X deserialize_X(std::vector<uint8_t> buffer) {
        X obj;
            size_t offset = 0;
            { auto deser = [](const std::vector<uint8_t> &buf) {   int v;   std::memcpy(&v, buf.data(), sizeof(int));   return v; };
              size_t len = sizeof(obj.val);
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
            size_t elem_size = sizeof(int);
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
    Y string_to_Y(std::string s) {
        Y obj;
            std::string trimmed = s.substr(1, s.size() - 2); // remove {}
            std::istringstream iss(trimmed);
            std::string token;
            if (std::getline(iss, token, ',')) {
                auto pos = token.find('=');
                if (pos != std::string::npos) {
                    std::string value_str = token.substr(pos + 1);
                    auto conv = [](const std::string &s) { return s; };
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
                    auto conv = [](const std::string &s) { return s; };
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
            { auto ser = [=](const std::vector<X>& vec) -> std::vector<uint8_t> {
            std::vector<uint8_t> buffer;
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
            size_t count = vec.size();
            buffer.resize(sizeof(size_t));
            std::memcpy(buffer.data(), &count, sizeof(size_t));
        
            auto element_serializer = [](const int &v) {   std::vector<uint8_t> buf(sizeof(int));   std::memcpy(buf.data(), &v, sizeof(int));   return buf; };
            if (!vec.empty()) {
                size_t elem_size = sizeof(int);
                buffer.resize(buffer.size() + vec.size() * elem_size);
                std::memcpy(buffer.data() + sizeof(size_t), vec.data(), vec.size() * elem_size);
            }
            return buffer;
        };
              auto bytes = ser(obj.numbers);
              size_t len = bytes.size();
              buffer.resize(buffer.size() + sizeof(size_t));
              std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &len, sizeof(size_t));
              buffer.insert(buffer.end(), bytes.begin(), bytes.end()); }
            return buffer;
        };
            for (const auto& elem : vec) {
                auto elem_bytes = element_serializer(elem);
                size_t elem_size = elem_bytes.size();
                buffer.resize(buffer.size() + sizeof(size_t));
                std::memcpy(buffer.data() + buffer.size() - sizeof(size_t), &elem_size, sizeof(size_t));
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
    Y deserialize_Y(std::vector<uint8_t> buffer) {
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
              size_t len = sizeof(obj.age);
              if (offset + len > buffer.size()) return obj;
              std::vector<uint8_t> slice(buffer.begin() + offset, buffer.begin() + offset + len);
              obj.age = deser(slice);
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
              size_t len = sizeof(obj.val);
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
            size_t elem_size = sizeof(int);
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
    std::optional<std::function<double()>> deferred_invoker_that_returns_double(std::string invocation) {
        std::optional<std::function<double()>> val;
        val = meta_basic_math.deferred_invoker_that_returns_double(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<std::function<long()>> deferred_invoker_that_returns_long(std::string invocation) {
        std::optional<std::function<long()>> val;
        val = meta_basic_math.deferred_invoker_that_returns_long(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
    std::optional<std::function<int()>> deferred_invoker_that_returns_int(std::string invocation) {
        std::optional<std::function<int()>> val;
        val = meta_basic_math.deferred_invoker_that_returns_int(invocation);
        if (val)
            return val;
        
        return std::nullopt;

    }
};



} // namespace meta_program

#endif // META_PROGRAM_HPP
