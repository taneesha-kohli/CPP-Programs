#include<iostream>
using namespace std;

class A
{
int a;
public:
void set(int a)
{
    a=a;         //it will through garbage value because of same name 
    (*this).a=a;        
    //we can do instead
    this->a=a;     //both this are similar which are pointing the object ob1 or any object which is calling member a
} 

/*when we want to return this which is pointer so return type should also class pointer object */

A& set1(int a)       
{
this->a=a;                
return *this;
}

void get()
{
    cout<<"a : "<<a<<endl;
}
};
int main()
{
A ob1,ob2;
ob1.set(4);
ob1.get();

ob2.set1(5).get();
return 0;
}