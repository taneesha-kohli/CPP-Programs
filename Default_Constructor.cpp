#include<iostream>
using namespace std;

class A {
private:
int data;
int data1;

public:


A(int a1,int b1=5)  
//b is our default constructor ,mean if we will not pass the value of b1 so by default value of b1 will 5 
{
data=a1;
data1=b1;

}

void print()
{
    cout<<"Value of data is : " <<data<< "value of data1 is : " <<data1;
}

};
int main()
{
A x(4);  //this will call automatically to constructor ,passes 4 
x.print();

return 0;
}