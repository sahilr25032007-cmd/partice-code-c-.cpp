// wap to program basic syntax of inheritance
#include <iostream>
using namespace std;


class Base
{
public:
    void display()
    {
        cout << "This is the base class function." << endl;
    }
};


class Derived : public Base
{
public:
    void show()
    {
        cout << "This is the derived class function." << endl;
    }
};

int main()
{
    Derived obj;
    obj.display();  
    obj.show();     
    return 0;
}