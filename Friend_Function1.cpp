#include <iostream>
using namespace std;

class complex
{
    int a, b, c;

public:
    friend complex complexmul(complex, complex);

    void setvalues(int a1, int b1,int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void printvalues()
    {
        cout << "a is :" << a << " b is :" << b<<" c is: "<<c;
    }
};

complex complexmul(complex ob1, complex ob2)
{
    complex co;   //object declaration for accessing setvalues function
    co.setvalues((ob1.a*ob2.a),(ob1.b*ob2.b),(ob1.c*ob2.c));
    return co;
}

int main()
{
    complex o1, o2,compmul,o3;
    o1.setvalues(4, 5,6);
    o2.setvalues(6, 4,8);
   compmul= complexmul(o1, o2);  //return value of co (which is complex object) will copy in compmul
  compmul.printvalues();
    return 0;
}