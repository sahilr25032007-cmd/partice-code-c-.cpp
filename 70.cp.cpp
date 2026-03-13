// write is the name of the class in the program.
#include <iostream>
using namespace std;

class write
{
    int num, original, remainder, result = 0;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
        original = num;
    }

    void check()
    {
        for (; num != 0; num = num / 10)
        {
            remainder = num % 10;
            result = result + (remainder * remainder * remainder);
        }

        if (result == original)
            cout << original << " is an Armstrong number";
        else
            cout << original << " is not an Armstrong number";
    }
};

int main()
{
    write obj;
    obj.input();
    obj.check();
    return 0;
}