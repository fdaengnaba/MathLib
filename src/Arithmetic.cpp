#include "Arithmetic.h"

int Arithmetic::gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Arithmetic::lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // avoid integer overflow
}
