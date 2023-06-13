#include<iostream>
using namespace std;

class Base1{
int a;
public:
Base1(int a1)
{
    a=a1;
}
void print()
{
    cout<<"The value of A  : " <<a<<endl;
}
};
class Base2{
int b;
public:
Base2(int b1){
    b=b1;
}
void print2()
{
    cout<<"The value of b  : " <<b<<endl;
}
};

class Derived:public Base1,public Base2{  //we know Base class Constructor executes first , and because here Base1 is first written so it will execute first then Base2 and at last Derived class's own constructor will execute
int c,d;
public:
Derived(int t,int u,int v,int w):Base1(t),Base2(u){ 

/*This is The syntax for Constructor in derived classes,as we access all classes constructor in derived class This is total Constructor's variables 
of all classes , and we can assign any variable to any constructor , as we assign (t to Base1 u to Base2) we can also do v to Base 1 or w to Base1
 or any other ,but in derived class we will have to declare all variables total of all constructor of all classes like this */

c=v;      
d=w;        
}
void print3(){
    print();
    print2();
    cout<<"The Value of C  : "<<c<<endl;
    cout<<"The Value of D  : "<<d<<endl;
}
};

int main()
{

Derived d(3,5,6,7);
d.print3();

// d.print();        /*We can also call these function inside the derived class */
// d.print2();

return 0;
}