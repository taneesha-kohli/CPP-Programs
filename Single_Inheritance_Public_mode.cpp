#include <iostream>
using namespace std;

class Base
{
    int data1; // Private by default and is not inheritable , but if class have public getdata function so in derived class you can access private variable
public:
   int data2;
   void setdata();
   int getdata1();  //by doing getdata1(),or getdata2() which will return you the value of private variables 
   int getdata2();
};
void Base::setdata()
{
data1=20;
data2=30;
}
int Base ::getdata1()   //it returns value of data1 which is private member
{
return data1;
}
int Base::getdata2()   //it returns value of data2 , which can also easily accessable due to public
{
return data2;
}

class derived : public Base{
int data3;
public:
void process();
void display();
};

void derived::process()    
{
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
ob.setdata();   //we called setdata function with derived class because data1 and data2 value isn't initialise , so for initilising the value in data1
                //and data2 we called setdata function, which will initialise data1 with 20 and data2 with 30 
ob.process();  //now we can call process because we initialised data1 and data2   
ob.display();   //now by desplay function you can print data1,data2, and data3 value easily 
    return 0;
}