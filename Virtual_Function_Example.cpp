#include <iostream>
using namespace std;

/*by default base class function will call, if we will make base class function virtual so which object base class pointer has pointed those class function will invoke, display will call of derived1 and derived2 if base class display is virtual, if derived1 and derived2 has not their display so default virtual display of base will run*/

class base
{
    int varbase;
    public:
    base(int vb)
    {
        varbase=vb;
    }
    virtual void display()
    {
        cout<<"This is base class display"<<endl;
    }
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

// we are pointer base class's pointers with both derived classes
ptr1_base=&obj_derived1;    
ptr2_base=&obj_derived2;
// we know because pointer is of base class so by default base class display will run,but when we will define base class function virtual so derived class display will run
ptr1_base->display();
ptr2_base->display();

    return 0;
}