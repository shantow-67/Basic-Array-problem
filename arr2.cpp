#include <iostream>
using namespace std;

// problem -2
// Find Only odd sum, means if you are given [1,3,4,5,5,6,7] this array, please
// find sum of odd numbers 1+3+5.... Nth Odd

int main() {
  int arr[] = {1, 3, 4, 5, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);

  int oddsum = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      oddsum += arr[i];
    }
  }
  cout << "Sum off all odd number is " << oddsum;
}
