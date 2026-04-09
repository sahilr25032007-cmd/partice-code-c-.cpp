#include <iostream>
using namespace std;
class Student
{}
    private:
    float p,r,t,cls;
    public:
void input()
{
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time in years: ";
    cin>>t;
}
void calculate()
{
    cls = (p*r*t)/100;
}
void display()
{
    cout<<"The simple interest is: "<<cls<<endl;
}
int main()
{
    Student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}