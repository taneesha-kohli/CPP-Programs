#include <iostream>
using namespace std;

// Base Class
class Employee      
{

public:
    int id;
    float salary;

    Employee(int impid)
    {
        id = impid;
        salary = 34.0;
    }
    Employee(){}
};

// Derived Class Syntax

/*class {{Derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
   class members/methods/etc...
}

Visibility Mode :
1. Default visibility mode is private , if you don't define any visibility mode
2. Private visibility mode : Public member of the Base Class becomes Private members of the Derived class
3. Public visibility mode : Public member of the base class becomes Public member of the derived class
4. Private Member of base class will never inherit
*/

// Creating a Programmer Class Derived From Employee Base Class

class Programmer : Employee  //Because we didn't define any visibility mode here so by defailt the visibility mode will be private 
{                           //and we know in private visibility mode Base class public members would private in derived class 
public:
    int languagecode = 9;
    int id=15;
// Programmer(int impid)
// {
//     id=impid;
// }
void getdata()
{
    cout<<"Id : "<<id<<endl;
    
}
};


int main()
{
    Employee a(2);
    cout << a.salary << endl;
    // cout << b.salary << endl;
    Programmer skillf;
    cout<<skillf.languagecode<<endl; 
    skillf.getdata();
    return 0;
}