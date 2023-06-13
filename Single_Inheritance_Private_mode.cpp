#include<iostream>
using namespace std;

class Base {
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata()
{
    data1=20;
    data2=20;
}
int Base::getdata1()
{
    return data1;

}
int Base::getdata2()
{
    return data2;
}

class derived:private Base{  //Now because we have private invisibility so we can't inherite class any member because those will become private for this class
    int data3;
    public:
    void process();
    void display();
};
void derived::process()
{
    setdata();               //but we can use base class member through it's own function inside only in derived class  
    data3=data2*getdata1();
}
void derived::display()
{
    cout<<"Value of data1 is "<< getdata1()<<endl;
    cout<<"Value of data2 is "<< data2<<endl;
    cout<<"Value of data3 is "<< data3<<endl;
}
int main()
{
derived ob;
ob.process();
ob.display();
return 0;
}