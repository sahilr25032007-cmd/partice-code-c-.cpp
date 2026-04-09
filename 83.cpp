wap to program c++ program to show unreachable code error
#include <iostream>
using namespace std;

int main() {
    cout << "This will print." << endl;

    return 0;  // Program ends here

    // The following line is unreachable
    cout << "This will never print." << endl;

    // More unreachable code
    int x = 10;
    cout << "Value of x: " << x << endl;
}