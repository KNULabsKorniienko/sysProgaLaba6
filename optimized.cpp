#include <iostream>

// Function to calculate the product of digits in a number
int productOfDigits(int n) {
    int product = 1;
    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    return product;
}

// Function to display the result for a pair of numbers
void displayProductOfDigits(int num1, int num2) {
    int result1 = productOfDigits(num1);
    int result2 = productOfDigits(num2);

    std::cout << "Product of digits for " << num1 << ": " << result1 << std::endl;
    std::cout << "Product of digits for " << num2 << ": " << result2 << std::endl;
}

int main() {
    for (int i = 20; i < 100; ++i) {
        for (int j = 500; j < 1000; ++j) {
            displayProductOfDigits(i, j);
        }
    }
    return 0;
}