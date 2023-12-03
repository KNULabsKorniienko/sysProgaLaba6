#include <iostream>

// Function to calculate factorial
int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1; // Exit with an error code
    }

    int factorial = calculateFactorial(number);

    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
