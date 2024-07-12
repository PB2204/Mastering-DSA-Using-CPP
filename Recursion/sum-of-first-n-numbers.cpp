// Sum Of First N Numbers Using Recursion...

#include <iostream>
using namespace std;

void printSum(int N, int sum, int originalN) {
    if (N <= 0) {
        cout << "The Sum Of First " << originalN << " Numbers Is: "  << sum << " !" << endl;
        return;
    }

    printSum(N - 1, sum + N, originalN);
}

int main() {
    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    int sum = 0;

    // Call the recursive function, passing the original value of N
    printSum(N, sum, N);

    return 0;
}