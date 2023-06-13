#include<iostream>
using namespace std;

class Base1{
int a;
public:
Base1(){}
Base1(int data1)
{
    a=data1;
    cout<<"Constructor 1 is called "<<endl;
}

void print1()
{
    cout<<"The value of a is : "<<a<<endl;
}
};

class Base2:virtual public  Base1{
int b;
public:
Base2(int data2)
{
    b=data2;
     cout<<"Constructor 2 is called "<<endl;
}
void print2()
{
   
    
    cout<<"The value of b is : "<<b<<endl;
}
};

class Base3:public virtual Base1{
int d;
public:
Base3(int data3)
{
    d=data3;
     cout<<"Constructor 3 is called "<<endl;
}
void print3()
{
   
    
    cout<<"The value of b is : "<<d<<endl;
}

};

class Derived :public Base2,public Base3{
int e;
public:
Derived(int a1,int a2,int a3,int a4):Base1(a1),Base2(a2),Base3(a3)
{
    e=a4;
     cout<<"Constructor 4 is called "<<endl;
}
void print4(){
print1();
print2();
print3();
cout<<"The value of e is : "<<e<<endl;
}

};

int main()
{
Derived d(3,4,5,6);
return 0;
}
