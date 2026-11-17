#include <iostream>
using namespace std;

int main() {
    int A[100], noe;

    cout << "Enter number of elements: ";
    cin >> noe;

    if (noe < 0 || noe > 100) {
        cout << "Invalid size";
        return 0;
    }

    // Input
    cout << "Enter array elements: ";
    for (int i = 0; i < noe; i++) {
        cin >> A[i];
    }

    // Output
    cout << "Array elements are:" << endl;
    for (int i = 0; i < noe; i++) {
        cout << "A[" << i << "] = " << A[i] << endl;
    }

    return 0;
}
