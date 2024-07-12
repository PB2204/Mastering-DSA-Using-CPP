#include <iostream>
#include <cmath>
using namespace std;

bool armstrongChecker(int N) {
    int originalNumber = N;
    int numberOfDigits = 0;
    int temp = N;

    // Calculate the number of digits in the number
    while (temp != 0) {
        temp /= 10;
        numberOfDigits++;
    }

    int armstrongSum = 0;
    temp = N;

    // Calculate the sum of digits each raised to the power of the number of digits
    while (temp != 0) {
        int lastDigit = temp % 10;
        armstrongSum += pow(lastDigit, numberOfDigits);
        temp /= 10;
    }

    // Check if the original number is equal to the armstrongSum
    return (armstrongSum == originalNumber);
}

int main() {
    int Num;
    cout << "Enter Your Number: ";
    cin >> Num;

    if (armstrongChecker(Num)) {
        cout << Num << " is an Armstrong Number!" << endl;
    } else {
        cout << Num << " is not an Armstrong Number!" << endl;
    }

    return 0;
}