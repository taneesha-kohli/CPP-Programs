#include<iostream>
using namespace std;

class comp
{
int a,b;
public:
friend comp complex(comp,comp);
comp(int a1,int b1=5)
{
    a=a1;
    b=b1;
}

void display()
{
    cout<<a<<" + "<<b<<" i"<<endl;
}
};

comp complex(comp o1,comp o2)
{
comp c((o1.a+o2.a),(o2.a+o2.b));
return c;
}
int main()
{
comp ob1(4);
ob1.display();
comp ob2(5,6);
ob2.display();
complex(ob1,ob2).display();
return 0;
}