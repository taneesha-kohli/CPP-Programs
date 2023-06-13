#include <iostream>
using namespace std;

/*We knows if we create base type pointer so only it's functions invokes it is default behaviour but we can change it using virtual function , if we makes it's function virtual with virtual keyword so derived class function will invoke, without keyword base class display() will run by default */

class base
{
    public:
 int var_base;
 virtual void display()            //VIRTUAL FUNCTION
    {
        cout<<"Desplaying base class var_base : "<<var_base<<endl;
    }
  virtual void greet()
    {
        cout<<"Hello base class"<<endl;
    }
};
class derived:public base
{
    public:
    int var_derived;
    void display()
    {
       cout<<"Desplaying base class var_base : "<<var_base<<endl;
       cout<<"Desplaying derived class var_derived : "<<var_derived<<endl;
    }
    void greet(){
        cout<<"Hello derived class"<<endl;
    }
};
int main()
{
base *base_ptr;
base base_obj;
derived derived_obj;

base_ptr=&derived_obj;
base_ptr->var_base=78;
base_ptr->display();
base_ptr->greet();
    return 0;
}
