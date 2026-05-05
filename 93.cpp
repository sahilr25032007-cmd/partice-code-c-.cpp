// wap to program mirror half pyramid pattern
#include <iostream>
using namespace std;
void printMirrorHalfPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}