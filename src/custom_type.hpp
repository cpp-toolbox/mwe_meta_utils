#ifndef CUSTOM_TYPE_HPP
#define CUSTOM_TYPE_HPP

#include <string>
#include <vector>

class X {
  public:
    int val;
    std::string text;
    std::vector<int> numbers;
};

class Y {
  public:
    std::string name;
    int age;
    std::vector<X> xs;
};

#endif // CUSTOM_TYPE_HPP
