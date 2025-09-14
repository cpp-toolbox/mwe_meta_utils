#ifndef CUSTOM_TYPE_HPP
#define CUSTOM_TYPE_HPP

#include <cstdint>
#include <string>
#include <vector>

enum class A : uint8_t {
    ONE,
    TWO,
    THREE,
};

struct B {
    int val;
};

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
