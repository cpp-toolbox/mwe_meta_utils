#ifndef CUSTOM_TYPE_HPP
#define CUSTOM_TYPE_HPP

#include <cstdint>
#include <string>
#include <vector>
#include <array>

using MyVectorInt = std::vector<int>;

enum class A : uint8_t {
    ONE,
    TWO,
    THREE,
};

struct B {
    int val;
    MyVectorInt mvi;
    std::array<float, 3> position = {1, 2, 3};
    std::string s = "default_str";
};

// using Position = std::array<float, 3>;

class X {
  public:
    int val;
    std::string text;
    std::vector<int> numbers;
    B b;
};

class Y {
  public:
    std::string name;
    int age;
    A thing;
    std::vector<X> xs;
};

#endif // CUSTOM_TYPE_HPP
