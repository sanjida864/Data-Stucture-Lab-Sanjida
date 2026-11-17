#include <iostream>
using namespace std;

int main() {
    int arr[100], size, n, value, index;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter number of elements: ";
    cin >> n;

    if (size > 100 || n < 0) {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value: ";
    cin >> value;

    cout << "Enter index: ";
    cin >> index;

    if (n >= size || index < 0 || index > n) {
        cout << "Invalid input";
        return 0;
    }

    // Right Shift Operation
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = value;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
