#include "basic_math.hpp"

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero!");
    }
    return a / b;
}

int function_that_shouldnt_get_picked_up() { return 3; }

double power(double base, int exponent) { return std::pow(base, exponent); }

unsigned int factorial(unsigned int n) {
    unsigned int result = 1;
    for (unsigned int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a >= 0 ? a : -a; // ensure gcd is positive
}

int lcm(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    return std::abs(a / gcd(a, b) * b);
}

double square_root(double x) {
    if (x < 0) {
        throw std::invalid_argument("Square root of negative number!");
    }
    return std::sqrt(x);
}

double absolute(double x) { return x < 0 ? -x : x; }

unsigned int fibonacci(unsigned int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    unsigned int prev = 0, curr = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        unsigned long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
