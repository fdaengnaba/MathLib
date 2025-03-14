#include <iostream>
#include "Arithmetic.h"

void printMenu() {
    std::cout << "\n=== Scientific Calculator ===\n";
    std::cout << "1. GCD (Greates Common Divisor)\n";
    std::cout << "2. LCM (Least Common Multiple)\n";
    std::cout << "3. Prime Factorization\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option ";
}

void handleGCD() {
    int a;
    int b;
    std::cout << "Enter two numbers: ";

    // std::cin >> a >> b;
    // std::cout << "GCD of " << a << " and " << " is: " << Arithmetic::gcd(a, b) << std::endl;

    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input! Please enter integers.\n";
        std::cin.clear(); // reset fail state
        std::cin.ignore(10000, '\n'); // Discard invalid input
        return;
    }

    std::cout << "GCD of " << a << " and " << b << " is: " << Arithmetic::gcd(a, b) << "\n";
}

void handleLCM() {
    int a, b;
    std::cout << "Enter two numbers: ";

    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input! Please enter integers.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }
    std::cout << "LCM of " << a << " and " << b << " is: " << Arithmetic::lcm(a, b) << std::endl;
}

void handlePrimeFactorization() {
    int n;
    std::cout << "Enter a number: ";

    if (!(std::cin >> n)) {
        std::cout << "Invalid input! Please enter an integer.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }

    std::vector<int> factors = Arithmetic::primeFactors(n);

    std::cout << "Prime factors of " << n << ": ";
    for (int f : factors) {
        std::cout << f << " ";
    }
    std::cout << "\n";
}



int main() {
    int choice;
    do {
        printMenu();
        
        if (!(std::cin >> choice)) {
            std::cout << "Invalid choice! Enter a number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue; 
        }

        switch (choice) {
            case 1:
                handleGCD();
                break;
            case 2:
                handleLCM();
                break;
            case 3:
                handlePrimeFactorization();
                break;
            case 0: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice, try agian.\n";
        }
    } while (choice != 0);

    return 0;
}
