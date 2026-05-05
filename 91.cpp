// wap to program inverted half pyramid pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the inverted half pyramid pattern: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}