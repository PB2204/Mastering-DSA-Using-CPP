// Print 1 to N using Recursion...

#include <iostream>
using namespace std;

void print1ToN(int N) {
    // Base condition: if N is 0, stop the recursion
    if (N <= 0) {
        return;
    }

    // Recursive call with N-1
    print1ToN(N - 1);

    // Print the number
    cout << N << endl;
}

int main() {
    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    // Call the recursive function
    print1ToN(N);

    return 0;
}