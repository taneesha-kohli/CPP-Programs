#include<iostream>
using namespace std;

class cons
{
    int a,b;
    public:
    cons();  //default constructor because it is not having any argument,  declaration of DEFAULT CONSTRUCTOR
    cons(int ,int);
    void display()
    {
        cout<<"a :"<<a<<" b :"<<b;
    }
};

cons::cons()   //definition of constructor
{
a=0;           //a default value will be 0
}

cons::cons(int a1,int b1)           //PARAMETERISED CONSTRUCTOR
{
a=a1;      //we assigning values to a and b using parameterised constructor
b=b1;
}
int main()
{
cons c;       //defaut constructor will be invoke(call)
cons c1(4,5);    //parameterised constructor will invoke
c1.display();       
return 0;
}

//as we can easily set values of members without using set function 