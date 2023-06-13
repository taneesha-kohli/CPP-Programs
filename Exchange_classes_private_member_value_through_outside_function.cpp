#include <iostream>
using namespace std;
class B;   //forward declaration
class A
{
    int a;
    public:
    friend void exchange(A&,B&);
    void setvalue(int value)
    {
        a=value;
    }
    void display()
    {
        cout<<"a is :"<<a<<"\t";
    }
};
class B
{
    int b;
    public:
      friend void exchange(A&,B&);
    void setvalue(int value)
    {
        b=value;
    }
       void display()
    {
        cout<<"b is :"<<b<<endl;
    }
};

void exchange(A &a1,B &b1)      //it will perform like this --- &a1=ob1  , &b1=ob2
//reference object as a function argument  ,USING CALL BY REFERENCE
{
int temp;
temp=a1.a;
a1.a=b1.b;
b1.b=temp;
}

int main()
{
A ob1;      
B ob2;
ob1.setvalue(7);
ob1.display();
ob2.setvalue(4);
ob2.display();
exchange(ob1,ob2);
cout<<"After swapping----"<<endl;
ob1.display();
ob2.display();

    return 0;
}