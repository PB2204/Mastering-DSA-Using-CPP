#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter The Size Of The Array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter The Array Element OF Index " << i << " : ";
        cin >> arr[i];
    }

    cout << "The Array Is Now: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}