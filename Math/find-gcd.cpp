// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

// The Greatest Common Divisor of any two integers is the largest number that divides both integers.

// Examples

// Example 1:
// Input:N1 = 9, N2 = 12

// Output:3
// Explanation:Factors of 9: 1, 3 and 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.


// Example 2:
// Input:N1 = 20, N2 = 15

// Output: 5
// Explanation:Factors of 20: 1, 2, 4, 5
// Factors of 15: 1, 3, 5
// Common Factors: 1, 5 out of which 5 is the greatest hence it is the GCD.

#include <iostream>
using namespace std;

int findGCD(int num1, int num2) {
    int gcd;
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int N1, N2;
    cout << "Enter Your First Number : ";
    cin >> N1;
    cout << "Enter Your Second Number : ";
    cin >> N2;

    cout << "GCD of " << N1 << " and " << N2 << " is " << findGCD(N1, N2) << " !" << endl;

    return 0;
}