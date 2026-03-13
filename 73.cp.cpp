// wap a c++ program to find the sum of two  number using a class 
#include <iostream>
using namespace std;

class Sum
{
private:
    int a, b, s;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add()
    {
        s = a + b;
    }

    void display()
    {
        cout << "Sum = " << s;
    }
};

int main()
{
    Sum obj;
    obj.input();
    obj.add();
    obj.display();
    return 0;
}