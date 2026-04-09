Wap to program handling divide by zero exception in c++
#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero error!");
    }
    return a / b;
}

int main() {
    int x, y;
    cout << "Enter numerator: ";
    cin >> x;
    cout << "Enter denominator: ";
    cin >> y;

    try {
        int result = divide(x, y);
        cout << "Result: " << result << endl;
    }
    catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues safely..." << endl;
    return 0;
}