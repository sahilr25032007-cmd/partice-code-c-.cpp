// write a program to square a pattern
#include <iostream>
using namespace std;
void printSquarePattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}