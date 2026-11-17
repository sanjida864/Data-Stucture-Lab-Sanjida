#include <iostream>
using namespace std;

int main() {
    int A[100], size, noe, index;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter number of elements: ";
    cin >> noe;

    if (noe > size || noe < 0 || size > 100) {
        cout << "Invalid size";
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }

    cout << "Enter index to delete: ";
    cin >> index;

    if (index < 0 || index >= noe) {
        cout << "Invalid index";
        return 0;
    }

    // Left Shift Operation
    for (int i = index; i < noe - 1; i++) {
        A[i] = A[i + 1];
    }

    noe--;

    cout << "Array after deletion: ";
    for (int i = 0; i < noe; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
