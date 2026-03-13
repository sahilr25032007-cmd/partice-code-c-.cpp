#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    void setData(int r, string n)
    {
        roll = r;
        name = n;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    s1.setData(101, "Rahul");
    s1.display();

    return 0;
}