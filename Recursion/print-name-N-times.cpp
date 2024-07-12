// Print Your Name Using Recursion For N Times...

#include <iostream>
using namespace std;

void printNameNTimes(const string& name, int N) {
    // Base condition: if N is 0, stop the recursion
    if (N <= 0) {
        return;
    }

    // Print the name
    cout << name << endl;

    // Recursive call with N-1
    printNameNTimes(name, N - 1);
}

int main() {
    string name;
    cout << "Enter Your Name: ";
    cin >> name;

    int N;
    cout << "Enter Your Number: ";
    cin >> N;

    // Call the recursive function
    printNameNTimes(name, N);

    return 0;
}