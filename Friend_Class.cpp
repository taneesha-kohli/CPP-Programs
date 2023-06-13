#include<iostream>
using namespace std;
class complex;  //forward declaration
class friendClass 
{
public:
void sum(complex,complex);
void mul(complex,complex);
};

class complex
{
int a,b;
public:
friend class friendClass;
void setvalues(int a1,int b1)    //outside function can setvalues from this member class's function
{
    a=a1;
    b=b1;
}
};

void friendClass::sum(complex ob1,complex ob2)
{
int sum;
sum=(ob1.a+ob2.a);
cout<<sum<<endl;
}

void friendClass::mul(complex o1,complex o2)
{
int mul;
mul=(o1.b*o2.b);
cout<<mul;
}

int main()
{
complex c1,c2,c3,c4;
friendClass f1,f2;
c1.setvalues(4,5);
c2.setvalues(7,9);
f1.sum(c1,c2);
f2.mul(c1,c2);
return 0;
}