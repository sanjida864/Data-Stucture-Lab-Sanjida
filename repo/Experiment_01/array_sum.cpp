#include <iostream>
using namespace std;

int main() {
    int A[100], noe, sum = 0;

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

    // Array Sum
    for (int i = 0; i < noe; i++) {
        sum += A[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}
