#include <iostream>
using namespace std;

// problem -9
// Find Minimum from this array [12,34,5,6]

int findMin(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int arr[] = {12, 34, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minNumber = findMin(arr, size);
    cout << "The minimum number in the array is: " << minNumber << endl;

    return 0;
}
