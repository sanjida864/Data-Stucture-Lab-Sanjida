#include <iostream>
using namespace std;

int main() {
    int A[100], noe, target, position = -1;

    cout << "Enter number of elements: ";
    cin >> noe;

    if (noe < 0 || noe > 100) {
        cout << "Invalid size";
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    // Linear Search
    for (int i = 0; i < noe; i++) {
        if (A[i] == target) {
            position = i;
            break;
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
