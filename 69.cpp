// wap to program to check Amstrong number using for loop.
#include <iostream>
using namespace std;

int main() {
    int num, original, remainder;
    int result = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    for (; num != 0; num = num / 10) {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
    }

    if (result == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}