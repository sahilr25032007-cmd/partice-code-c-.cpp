// wap to programm chaarcter pattern
#include <iostream> 
using namespace std;
void printCharacterPattern(int n) {
    char ch = 'A'; // Starting character

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++; // Move to the next character
        }
        cout << endl;
    }
}