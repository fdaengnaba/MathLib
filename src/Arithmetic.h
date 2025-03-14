#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include <vector>

class Arithmetic {
public:
    static int gcd(int a, int b);
    static int lcm(int a, int b);
    static std::vector<int> primeFactors(int n);
};

#endif // ARITHMETIC_H
