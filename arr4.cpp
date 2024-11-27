#include <iostream>
using namespace std;

// problem -4
// Find If a number exists in one array, for example if you are given [12,35,56,7] this array, and if you are asked to find 35 is in the array  or not your code should find this. [use if else and array index ]

bool findNumber(int arr[],int size,int target){
  
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
     return true;
    }
  }
  return false;
}


int main() {
  int arr[] = {12,35,56,7};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 35;
  bool ans=findNumber(arr,size, target);
  cout << (ans ? "Found" : "not found") << endl;
}