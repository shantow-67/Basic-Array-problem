#include <iostream>
using namespace std;
// problem -3
// Find Only even sum, means if you are given [1,3,4,5,5,6,7] this array, please find sum of even numbers 4+6.... Nth even

int main() {
  int arr[] = {1, 3, 4, 5, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);

  int evenSum = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      evenSum += arr[i];
    }
  }
  cout << "Sum off all odd number is " << evenSum;
}