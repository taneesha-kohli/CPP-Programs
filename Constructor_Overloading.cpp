#include<iostream>
using namespace std;

class complex{
int x,y;
public:

void print()       //as we can use constructor multiple time so it calls constructor overloading
{
    cout<<x<< ","<< y<<endl;
}
complex() //This is default constructor which doesn't takes any argument ,prints what we assigned inside it, it will assign 0 to x and 0 to y
{
    x=0;
    y=0;
}
complex(int a,int b)
{
  x=a;
  y=b;
}
complex(int a1)  //because we passed one argument so it will change the value of x and will keep 0 in y default
{
    x=a1;
    y=0;
}
};
int main()
{
    complex a;
    a.print(); //because we didn't passed any argument with the a object so it will default run the default constructor
complex b(3,4);
b.print();
complex c(6);  
c.print();  

return 0;
}