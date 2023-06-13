#include <iostream>
using namespace std;

/*invokation of functions will decide in run time this known LATE BINDING , which class pointer we will create that function will call*/

class base
{
public:
int var_base;
void display()
{
    cout<<"Displaying base class var_base : "<<var_base<<endl;
}
};
class derived:public base
{
public:
int var_derived;
void display()
{
    cout<<"Displaying base class var_base : "<<var_base<<endl;
    cout<<"Displaying derived class var_derived : "<<var_derived<<endl;
}
};
int main()
{
base *base_ptr;             //base class pointer
base obj_base;              //base class object
derived obj_derived;        //derived class object

 

 /*NOTE: base class pointer will only invoke the members of base class ,in case of inheritance only inherited member from base class */

// we pointed base class pointer to derived class object
base_ptr=&obj_derived;  
base_ptr->var_base=344;       //we can do this , derived class has inherited base class pulic all members 
base_ptr->display();               //will display base class display()

//what if we will access derived class members through base class pointer
// base_ptr->var_derived=45;       //it will throw error

derived *derived_ptr;
derived_ptr=&obj_derived;
derived_ptr->display();                //it will display derived class display()
    return 0;
}