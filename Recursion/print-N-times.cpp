// Print Something N Times Using Recursion...

#include <iostream>
using namespace std;

void printNTimes(const string& printStatement, int N) {
    // Base condition: if N is 0, stop the recursion
    if (N <= 0) {
        return;
    }

    // Print the statement
    cout << printStatement << endl;

    // Recursive call with N-1
    printNTimes(printStatement, N - 1);
}

int main() {
    string printStatement;
    cout << "Enter Your Print Statement: ";
    cin >> printStatement;

    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    // Call the recursive function
    printNTimes(printStatement, N);

    return 0;
}