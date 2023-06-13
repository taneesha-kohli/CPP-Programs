#include<iostream>

/*we use forward declaration only when we are declaring that class which we didn't created yet*/
using namespace std;
class B;         //forward declaration of B because we used B while sum's friend function declaration as argument
class A {
    int data;
    public:
    void setdata(int s)
    {
    data=s;
    }
    friend void sum(A,B);     //friend function declaration of sum with argument class A and B object
};

class B{                      
    int data1;
    public:
    void setdata(int t)
    {
        data1=t;
    }
     friend void sum(A,B);
};

void sum(A a1,B b1) 
//function wants to access 2 different class data member so we will have to make this function friend function in both classes 
{
    cout<<"Sum is : "<< a1.data+b1.data1;
}
int main()
{
    A a1;
    B b1;
    a1.setdata(5);
    b1.setdata(8);
    sum(a1,b1);

return 0;
}
