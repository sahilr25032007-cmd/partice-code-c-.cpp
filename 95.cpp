// wap to program inverted full pyramid triangle pattern
#include <iostream> 
using namespace std;
void printInvertedFullPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}