#include <iostream>
using namespace std;

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