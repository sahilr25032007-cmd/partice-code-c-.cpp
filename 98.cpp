// wap to program to pascal triangle pattern
#include <iostream>
using namespace std;
void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int number = 1; // First number in every row is 1
        for (int j = 0; j <= i; j++) {
            cout << number << " ";
            // Calculate the next number using the formula: C(n, k) = C(n, k-1) * (n - k + 1) / k
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }
}