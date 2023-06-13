#include<iostream>
using namespace std;

class number{
int a,b;
public:

number(){}

number(int n1,int n2)
{
a=n1;
b=n2;
}
number(int a1)
{
    a=a1;
}

number(number &ob) //This is actual copy constructor declaration
{                   
    a=ob.a;
} 
 
    //we can also ignore this  and can do 2 methods as we did in main() that will also copies constructor without doing it

void display()
{
    cout<< a <<endl;
}

void show()
{
    cout<<"a : "<<a<<" b :"<<b<<endl;
}
};

int main()
{
number ob1,ob2(6);
 /*if we want to create object with no argument so we will have to define default constructor*/

number ob3(ob2);    
//if we don't define copy constructor as we did (number(number &ob)) and writes only this so compiler automatically creates copy constructor

number ob4=ob2;  
//this is also declaration of automatically copy constructor , this will copy ob2 constructor in ob4 automatically , without defining copy constructor

number obj(5,6);            //constructor with 2 argument will run ,obj will have 2 members a and b
number obj1(obj);
obj1.show();            //obj's 2 member will copy in obj1 
ob2.display();
ob3.display();
ob4.display();
return 0;
}

//copy constructor copies one object member in newly created object 
//we can't do number ob1, ob2(4);
//ob1(ob2) //this is not allowed , we will have to do instead , number ob1(ob2)
