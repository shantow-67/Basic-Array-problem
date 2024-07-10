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

// problem -5
// Find min of two number 12,3 what is the min ?
int main() {
  int a=12;
  int b=3;

  if(a<b){
    cout<<"min number is "<<a;
  }else{
    cout<<"min number is "<<b;
  }
}

// problem -6
// Find Max of two number 23,89 ? what is the max ?
int main() {
  int a=23;
  int b=89;

  if(a>b){
    cout<<"max number is "<<a;
  }else{
    cout<<"max number is "<<b;
  }
}

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


// problem -10
//Find sum from 0 to N [use for loop or any formulae]

int sumToN(int n) {
    int sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    int result = sumToN(n);
    cout << "Sum of numbers from 0 to " << n << " is: " << result << endl;

    return 0;
}
