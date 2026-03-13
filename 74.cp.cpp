// wap to  a c++ program for dynamic memory allocation using new and delete.
#include <iostream>
using namespace std;

class Memory
{
private:
    int *ptr;

public:
    void input()
    {
        ptr = new int;   
        cout << "Enter a number: ";
        cin >> *ptr;
    }

    void display()
    {
        cout << "Value = " << *ptr << endl;
    }

    void freeMemory()
    {
        delete ptr;      
    }
};

int main()
{
    Memory obj;
    obj.input();
    obj.display();
    obj.freeMemory();
    return 0;
}