// wap to program to find compound interset.
#include <iostream>
#include <cmath>
using namespace std;

class Interest
{
private:
    float p, r, t, ci;

public:
    void input()
    {
        cout << "Enter Principal: ";
        cin >> p;
        cout << "Enter Rate: ";
        cin >> r;
        cout << "Enter Time: ";
        cin >> t;
    }

    void calculate()
    {
        ci = p * pow((1 + r/100), t) - p;
    }

    void display()
    {
        cout << "Compound Interest = " << ci << endl;
    }
};

int main()
{
    Interest obj;
    obj.input();
    obj.calculate();
    obj.display();
    return 0;
}