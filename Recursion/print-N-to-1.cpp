// Print N to 1 Using Recursion...

#include <iostream>
using namespace std;

void printNTo1(int N) {
    // Base condition: if N is 0, stop the recursion
    if (N <= 0) {
        return;
    }

    // Print the number
    cout << N << endl;

    // Recursive call with N-1
    printNTo1(N - 1);
}

int main() {
    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    // Call the recursive function
    printNTo1(N);

    return 0;
}