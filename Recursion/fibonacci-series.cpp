// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

// Examples:

// Example 1:
// Input: N = 5
// Output: 0 1 1 2 3 5
// Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

// Example 2:
// Input: 6

// Output: 0 1 1 2 3 5 8
// Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)

#include <iostream>
#include <vector>
using namespace std;

// Function to generate Fibonacci series up to Nth term recursively
void fibonacciSeries(int first, int second, int n, vector<int>& arr) {
    if (n == 0) {
        return;
    }
    int next = first + second;
    arr.push_back(next);
    fibonacciSeries(second, next, n - 1, arr);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    // Base cases
    vector<int> fibSeries;
    if (N >= 0) fibSeries.push_back(0);
    if (N >= 1) fibSeries.push_back(1);

    // Generate Fibonacci series up to Nth term
    if (N > 1) {
        fibonacciSeries(0, 1, N - 1, fibSeries);
    }

    // Print the series
    for (int i = 0; i <= N; ++i) {
        cout << fibSeries[i] << " ";
    }
    cout << endl;

    return 0;
}
