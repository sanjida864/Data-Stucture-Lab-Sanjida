#include <iostream>
using namespace std;

int main() {
    int A[100], noe, target;
    int low, high, mid, position = -1;

    cout << "Enter number of elements: ";
    cin >> noe;
    if (noe < 0 || noe > 100) {
        cout << "Invalid size";
        return 0;
    }

    cout << "Enter sorted array elements (ascending): ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }
    // Binary search works only on a sorted array
    for (int i = 1; i < noe; i++) {
        if (A[i] < A[i - 1]) {
            cout << "Array is not sorted";
            return 0;
        }
    }
    cout << "Enter target value: ";
    cin >> target;
    // Binary Search
    low = 0;
    high = noe - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (A[mid] == target) {
            position = mid;
            break;
        }
        else if (A[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (position == -1) {
        cout << "Element not found";
    }
    else {
        cout << "Element found at index " << position;
    }
    return 0;
}
