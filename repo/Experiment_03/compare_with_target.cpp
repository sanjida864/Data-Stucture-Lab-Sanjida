#include <iostream>
using namespace std;

int main() {
    int A[100], noe, target;
    int greater = 0, smaller = 0, equal = 0;

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

    // Compare target with array elements
    for (int i = 0; i < noe; i++) {
        if (A[i] > target) {
            greater++;
        }
        else if (A[i] < target) {
            smaller++;
        }
        else {
            equal++;
        }
    }

    cout << "Greater than target: " << greater << endl;
    cout << "Smaller than target: " << smaller << endl;
    cout << "Equal to target: " << equal << endl;

    return 0;
}
