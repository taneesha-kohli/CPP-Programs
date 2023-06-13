#include <iostream>
using namespace std;

// Syntax of multiple inheritance

/*
class DerivedC :visibility-mode Base1, visibility-mode Base2
{
Body of derived class
};
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int b)
    {
        base1int = b;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int b)
    {
        base3int = b;
    }
};

class derived : public Base1, public Base2, public Base3
{                         // You can inherit multiple classes like this , and can use those classes function and member as per need
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The value of Base3 is : " << base3int << endl;
        cout << "Sum is : " << (base1int + base2int+base3int);
    }
};

int main()
{
    derived d;
    d.set_base1int(6);
    d.set_base2int(8);
    d.set_base3int(8);
    d.show();
    return 0;
}