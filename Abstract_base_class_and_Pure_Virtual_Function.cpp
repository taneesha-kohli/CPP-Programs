#include<iostream>
using namespace std;

// we will get an error if pure virtual function will not implement in derived class, abstract class is just a template of which other classes implements by overriding it pure virtual function,we can check this by removing derived virtual function , we will get error

class base
{
    int varbase;
    public:
    base(int vb)
    {
        varbase=vb;
    }
    virtual void display()=0;       //pure virtual funtion 
    //which has no implementation,but derived class will have to implement it , IF CLASS WITH ONLY ONE PURE VIRTUAL FUNCTION SO THAT BECOMES ABSTRACT CLASS
};
class derived1:public base
{
    int varderived1;
    public:
    derived1(int vd1,int vb1):base(vb1)   //passing vbs to base constructor for setting it's private member value
    {
        varderived1=vd1;
    }
    void display()
    {
        cout<<"THis is derived1 class "<<endl;
    }
};
class derived2:public base
{
    int varderived2;
 public:
 derived2(int vd2,int vbs):base(vbs)     //passing vbs to base constructor for setting it's private member value
 {
    varderived2=vd2;
 }
 void display()
 {
    cout<<"This is derived2 class"<<endl;
 }
};

int main()
{
/*we have base class with two derived classes derived1 and derived2*/

base *ptr1_base,*ptr2_base;      //we have created two pointer of base class

derived1 obj_derived1(23,45);
derived2 obj_derived2(45,56);

ptr1_base = &obj_derived1;    
ptr2_base = &obj_derived2;
ptr1_base->display();
ptr2_base->display();


return 0;
}