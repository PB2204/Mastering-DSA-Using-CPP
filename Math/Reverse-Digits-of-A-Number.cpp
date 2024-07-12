// Problem Statement: Given an integer N return the reverse of the given number.

// Note: If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

// Examples
// Example 1:
// Input:N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.
// Example 2:
// Input:N = 7789
// Output: 9877
// Explanation: The reverse of number 7789 is 9877.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter Your Number: ";
    cin >> N;
    int num = N;
    int reverse = 0;
    while( N > 0) {
        int lastDigit = N % 10;
        reverse = reverse * 10 + lastDigit;
        N /= 10;
    }
    cout << "Reverse of Number " << num << " Is : " << reverse << " !" << endl;
    return 0;
}