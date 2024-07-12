// Problem Statement: Given an integer N, return true if it is a palindrome else return false.

// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

// Examples
// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
// Example 2:
// Input:N = 7789
// Output: Not Palindrome
// Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome

#include <iostream>
using namespace std;

int palindromeChecker(int num) {
    int number = num;
    int reversedNumber = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        num /= 10;
    }

    if (reversedNumber == number) {
        cout << number << " Is A Palindrome Number !" << endl;
    }
    else {
        cout << number << " Is Not A Palindrome Number !" << endl;
    }
}

int main() {
    int N;
    cout << "Enter Your Number : ";
    cin >> N;

    palindromeChecker(N);

    return 0;
}