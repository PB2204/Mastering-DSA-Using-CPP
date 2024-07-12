// Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

// Examples
// Example 1:
// Input:N = 2
// Output:True
// Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
// Example 2:
// Input:N =10
// Output: False
// Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.

#include <iostream>
using namespace std;

bool isPrime(int N) {
    int divisors = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisors++;
        }
    }
    return divisors == 2;
}

int main() {
    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    if (isPrime(N)) {
        cout << N << " is a Prime Number." << endl;
    } else {
        cout << N << " is not a Prime Number." << endl;
    }

    return 0;
}