#include <iostream>
using namespace std;


// problem -7
// swap to number .

void swapNumbers(int arr[], int index1, int index2) {
    // Ensure indices are within the bounds of the array and are different
    if (index1 >= 0 && index2 >= 0 && index1 != index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}

int main() {
    int arr[] = {12, 35, 56, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index1 = 1; // Index of the first number to swap
    int index2 = 2; // Index of the second number to swap

    cout << "Before swapping: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapNumbers(arr, index1, index2);

    cout << "After swapping: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
