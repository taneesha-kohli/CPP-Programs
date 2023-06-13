#include<iostream>
using namespace std;

//Swap of 2 classes data member using outsider function
class Y;
class X{
int var1;
public:
void setdata(int a)
{
    var1=a;
}

void getdata()
{
    cout<<"a is : " <<var1<<endl;
}
friend void exchange(X&,Y&);
};

class Y{
int var2;
public:
void setdata(int b)
{
    var2=b;
}

void getdata()
{
    cout<<"b is : " <<var2<<endl;
}
friend void exchange(X&,Y&);
};

void exchange(X &j,Y &k)
{
 int temp;
 temp= j.var1;
 j.var1=k.var2;
 k.var2=temp;
}

int main()
{
X a1 ;
Y b1;
a1.setdata(4);
b1.setdata(5);
a1.getdata();
b1.getdata();
exchange(a1,b1);
a1.getdata();
b1.getdata();
return 0;
}