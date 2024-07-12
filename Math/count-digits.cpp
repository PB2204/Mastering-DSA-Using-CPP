// Problem Statement: Given an integer N, return the number of digits in N.

// Examples
// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.
// Example 2:
// Input:N = 7789
// Output: 4
// Explanation: The number 7789 has 4 digits.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter Your Number : ";
    cin >> N;
    int num = N;
    int count = 0;
    while( N > 0 ) {
        N = N / 10;
        count++;
    }
    cout << "Total Digits In Number " << num << " Is : " << count << " !" << endl;
    return 0;
}