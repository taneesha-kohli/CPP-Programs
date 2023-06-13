#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex sum1(complex o1, complex o2); 
    /*by doing this declaration complex sum1 function will be friend of complex class ,now it can access this class's private members*/
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printdata()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

complex sum1(complex ob1, complex ob2)
{

   /* //we can set values on a and b only through complex class's member function which is setvalues
          ob1.setvalues((ob1.a+ob2.a),(ob1.b+ob2.b));
 //it will through an array without making function as a friend function , because a and b are private member
  */

    complex ob3;  //to call it's member setdata we have to need declare complex object

     ob3.setdata((ob1.a + ob2.a), (ob1.b + ob2.b));  
      /*we can change(access) value of complex class data member using it's member function only when this function is friend function of complex class , setdata is member function of complex class*/
    
    return ob3;
}

int main()
{
    complex ob1, ob2, sum;
    ob1.setdata(2, 4);
    ob1.printdata();
    ob2.setdata(5, 6);
    ob1.printdata();
    sum = sum1(ob1, ob2); // WE CAN'T ACCESS SUM1 FRIEND FUNCTION USING CLASS OBJECT BECAUSE IT IS NOT MEMBER OF THAT CLASS ,IT CAN JUST ACCESS MEMBER
    sum.printdata();

    return 0;
}

