#include <iostream>
using namespace std;


// problem -8
// Find Maximum number from this array [12,34,5,0];

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {12, 34, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxNumber = findMax(arr, size);
    cout << "The maximum number in the array is: " << maxNumber << endl;

    return 0;
}

