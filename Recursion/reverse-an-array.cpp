// Problem Statement: You are given an array. The task is to reverse the array and print it.

// Examples:

// Example 1:
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

// Example 2:
// Input: N=6 arr[] = {10,20,30,40}
// Output: {40,30,20,10}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

#include <iostream>
using namespace std;

void reverseArray(int i, int arr[], int n){
    if (i >= n / 2) return;

    swap(arr[i], arr[n - i - 1]);

    reverseArray(i + 1, arr, n);
}

int main() {
    int n;
    cout << "Enter The Array Length: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(0, arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}