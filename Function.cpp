#include<iostream>
using namespace std;

/*RETURNS VALUE*/
int add(int a,int b)
{
int c=a+b;
return c;
}

/*PRINTS VALUE IN FUNCTION ,DOESN'T RETURNS ANY VALUE*/
void add(int a,int b)
{
    int c=a+b;
    cout<<"addition is : "<<c;
}

int main()
{
int a,b;
cout<<"Enter the first number : "<<endl;
cin>>a;
cout<<"Enter the second number : "<<endl;
cin>>b;
cout<<"addition of a and b is : "<<add(a,b);

/*FOR INT FUNCTION ,WHICH RETURNS VALUE OF SUM*/
cout<<"Addition is : "<<add(a,b);

/*FOR VOID FUCNTONS WHICH DOESN'T RETURN THE SUM*/
add(a,b);

return 0;
}