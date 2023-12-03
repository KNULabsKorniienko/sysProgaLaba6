// #include <iostream>

// // Function to calculate factorial
// int calculateFactorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         int res = 1;
//         for(int i = 1; i<=n; i++){
//             res*=i;
//         }
//         return res;
//     }
// }

// int main() {
//     int number;
//     long temoConst = 333;
//     std::cout << "Enter a non-negative integer: ";
//     std::cin >> number;

//     if (number < 0) {
//         std::cout << "Please enter a non-negative integer." << std::endl;
//         return 1; // Exit with an error code
//     }

//     int factorial = calculateFactorial(number);

//     std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int sumOfDivisors(int n){
    int sum = 0;
    int sum_2 = 0;
    for(int i = 1; i<=n; i++){
        sum_2=sum;
        if(n%i==0){
            sum_2 = sum_2 + i;
        }
        sum = sum_2;
    }
    return sum;
}
int main() {
    for(int i = 20; i<100; i++){
        for(int j = 500; j<1000 ;j++){
            cout<<"Sum of division "<<sumOfDivisors(i)+ sumOfDivisors(j)<<endl;
        }
    }
    return 0;
}

