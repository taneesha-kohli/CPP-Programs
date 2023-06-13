#include <iostream>
using namespace std;

class second;          //forward declaration of second class

class first
{
    int a;
    public:
    friend void sum(first,second);    //because we haven't define second so we will do it's forward declaration
    void setvalue(int value)
    {
        a=value;
    }
};
class second
{
    int b;
    public:
    friend void sum(first,second);
    void setvalue(int value)
    {
        b=value;
    }
};


//both class's members are private , so we will have to make this function friend for both classes
//after defining this function friend function of both classes , it can access their private members
void sum(first f,second s)    //class object formal arguments
{
int add=f.a+s.b;       //f is object of first class and s if of second class both has their own member 

//we can only access class's private members using it's object 
cout<<"sum of "<<f.a<<" and "<<s.b<<" :"<<add;
}

int main()
{
first f1;
second s1;
f1.setvalue(6);
s1.setvalue(8);
sum(f1,s1);  //class object actual arguments
    return 0;
}