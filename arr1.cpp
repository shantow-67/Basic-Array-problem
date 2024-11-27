#include <iostream>
using namespace std;

// problem -1
// Find sum of all element in one array i.e [1,3,4,5,5,6,7] is given array,
// please now find sum of 1+2+3+4.... N

int main() {
  int arr[] = {1, 3, 4, 5, 5, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  cout << "Sum off all element is " << sum;