#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    // Find the maximum element in the array
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Initialize the count array with zeros
    int count[maxElement + 1] = {0};

    // Count the frequency of each element
    for (int i = 0; i < n; ++i) {
        count[arr[i]]++;
    }

    // Calculate the cumulative sum
    for (int i = 1; i <= maxElement; ++i) {
        count[i] += count[i - 1];
    }

    // Create the output array
    int output[n];
    for (int i = n - 1; i >= 0; --i) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {2, 3, 0, 0, 1, 2, 1, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
