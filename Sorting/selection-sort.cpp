// Selection Sort Algorithm : Minimum Element At The First Position and Swap Position


// Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

// Examples:

// Example 1:
// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52
// Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

// Example 2:
// Input: N=5, array[] = {5,4,3,2,1}
// Output: 1,2,3,4,5
// Explanation: After sorting the array is: 1, 2, 3, 4, 5

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        int mini = i;
        for(int j = i; j <= n - 1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

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

    cout << endl;

    cout << "The Sorted Array Using Selection Sort Is: ";

    selectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Approach:

// The algorithm steps are as follows:

// First, we will select the range of the unsorted array using a loop (say i) that indicates the starting index of the range.
// The loop will run forward from 0 to n-1. The value i = 0 means the range is from 0 to n-1, and similarly, i = 1 means the range is from 1 to n-1, and so on.
// (Initially, the range will be the whole array starting from the first index.)
// Now, in each iteration, we will select the minimum element from the range of the unsorted array using an inner loop.
// After that, we will swap the minimum element with the first element of the selected range(in step 1).
// Finally, after each iteration, we will find that the array is sorted up to the first index of the range.
// Note: Here, after each iteration, the array becomes sorted up to the first index of the range. That is why the starting index of the range increases by 1 after each iteration. This increment is achieved by the outer loop and the starting index is represented by variable i in the following code. And the inner loop(i.e. j) helps to find the minimum element of the range [i…..n-1].

// Time complexity: O(N^2), (where N = size of the array), for the best, worst, and average cases.
// Reason: If we carefully observe, we can notice that the outer loop, say i, is running from 0 to n-2 i.e. n-1 times, and for each i, the inner loop j runs from i to n-1. For, i = 0, the inner loop runs n-1 times, for i = 1, the inner loop runs n-2 times, and so on. So, the total steps will be approximately the following: (n-1) + (n-2) + (n-3) + ……..+ 3 + 2 + 1. The summation is approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n^2/2 + n/2). Previously, we have learned that we can ignore the lower values as well as the constant coefficients. So, the time complexity is O(n^2). Here the value of n is N i.e. the size of the array.

// Space Complexity: O(1)