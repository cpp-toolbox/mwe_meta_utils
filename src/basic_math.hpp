#ifndef BASIC_MATH_HPP
#define BASIC_MATH_HPP

#include <iostream>
#include <cmath>     // for std::pow, std::sqrt
#include <stdexcept> // for std::invalid_argument

inline const int val = 3;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, int exponent);
unsigned int factorial(unsigned int n);
int gcd(int a, int b);
int lcm(int a, int b);
double square_root(double x);
double absolute(double x);
unsigned int fibonacci(unsigned int n);

#endif // BASIC_MATH_HPP
