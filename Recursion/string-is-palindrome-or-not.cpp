// Problem Statement: "Given a string, check if the string is palindrome or not."  A string is said to be palindrome if the reverse of the string is the same as the string.

// Examples:

// Example 1:
// Input: Str =  “ABCDCBA”
// Output: Palindrome
// Explanation: String when reversed is the same as string.

// Example 2:
// Input: Str = “TAKE U FORWARD”
// Output: Not Palindrome
// Explanation: String when reversed is not the same as string.

#include <iostream>
using namespace std;

// Function to reverse a string recursively
void reverseString(int i, string& str, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(str[i], str[n - i - 1]);
    reverseString(i + 1, str, n);
}

// Function to check if a string is a palindrome
void palindromeChecker(string str) {
    string originalStr = str;
    reverseString(0, str, str.size());
    if (str == originalStr) {
        cout << originalStr << " : Is A Palindrome!" << endl;
    } else {
        cout << originalStr << " : Is Not A Palindrome!" << endl;
    }
}

int main() {
    string str;
    cout << "Enter Your String : ";
    cin >> str;

    palindromeChecker(str);

    return 0;
}
