#include <iostream>
#include "Arithmetic.h"

int main() {
    int a = 56, b = 98;
    std::cout << "GCD of " << a << " and " << b << " is: " << Arithmetic::gcd(a, b) << std::endl;
    std::cout << "LCM of " << a << " and " << b << " is: " << Arithmetic::lcm(a, b) << std::endl;
    return 0;
}
