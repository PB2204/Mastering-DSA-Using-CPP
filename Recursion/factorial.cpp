// Print The Factorial Value Of Any Number Using Recursion...

#include <iostream>
using namespace std;

void PrintFactorial(int N, int factorial, int originalN) {
    if (N <= 0) {
        cout << "Factorial Of " << originalN << " Is : " << factorial << endl;
        return;
    }

    PrintFactorial(N - 1, factorial * N, originalN);
}

int main() {
    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    int factorial = 1;

    PrintFactorial(N, factorial, N);

    return 0;
}