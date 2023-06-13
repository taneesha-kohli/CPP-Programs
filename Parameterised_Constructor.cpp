#include<iostream>
using namespace std;

class complex{
    int a,b,c;
public:
void print()
{
    cout<<a<<"+"<<b<<"+"<<c<<endl;
}
complex(int,int,int);  //Declaration of constructor . Constructor keeps same name as it's class ,where it's defined
};

complex::complex(int a1,int b1,int c1)  //This automatically runs , by which your code runs without calling the function as we did with setfunction
{                                      //This can use in the place of setfunction , because we have to call setfunction to assign values but it's automatically assigns values as we did in main function,which calls parameterised constructor
    a=a1;                                           
    b=b1;
    c=c1;
   
}
int main()
{
complex a(4,5,6);  //parameterised constructor , you can assign values without calling the function using constructor
a.print();
complex b=complex(6,7,8);
b.print();
return 0;
}