#include <iostream>
#include "Arithmetic.h"

void printFactors(int n) {
    std::vector<int> factors = Arithmetic::primeFactors(n);
    std::cout << "Prime factors of " << n << ": ";
    for (int f : factors) {
        std::cout << f << " ";
    }
    std::cout << std::endl;
}

int main() {
    int a = 56;
    int b = 98;
    int n = 315;

    std::cout << "GCD of " << a << " and " << b << " is: " << Arithmetic::gcd(a, b) << std::endl;
    std::cout << "LCM of " << a << " and " << b << " is: " << Arithmetic::lcm(a, b) << std::endl;
    
    printFactors(a);
    printFactors(b);
    printFactors(n);
    
    return 0;
}
