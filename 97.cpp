// wap to program butterfly pattern
#include <iostream>
using namespace std;
void printButterflyPattern(int n) {
    for (int i = 0; i < n; i++) {
        // Print left wing
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int k = 0; k < 2 * (n - i - 1); k++) {
            cout << " ";
        }
        // Print right wing
        for (int l = 0; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--) {
        // Print left wing
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int k = 0; k < 2 * (n - i - 1); k++) {
            cout << " ";
        }
        // Print right wing
        for (int l = 0; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
}