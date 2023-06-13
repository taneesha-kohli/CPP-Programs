#include<iostream>
using namespace std;

/*Note : while declaration which element we declares first that initialises first */

class sum
{
int a,b;       // Declaration of elements
public:
sum(int a1,int b1):a(a1),b(b1)    //this is the second method of initialization through constructor
{
    // a=a1;
    // b=b1;
    // this is the simple syntax for initialization
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}



/*if we uses a value to initialize b*/

// sum(int a1,int b1):a(a1),b(b1+a)    //this will b1=6 a=4 b=10 
// {
    
//     cout<<"a : "<<a<<endl;
//     cout<<"b : "<<b<<endl;
// }

/*if we uses b value to initialize a*/

// sum(int a1,int b1):a(a1+b),b(b1)    
// //a1=4 but b is declared later so it will initialize after a and we will get garbage value 
// {
    
//     cout<<"a : "<<a<<endl;
//     cout<<"b : "<<b<<endl;
// }
};

int main()
{
sum(4,6);
return 0;
}