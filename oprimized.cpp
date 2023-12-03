#include <iostream>

int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int number;
    std::cin >> number;
    if (number < 0) return 1; 
    int factorial = calculateFactorial(number);
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
    return 0;
}