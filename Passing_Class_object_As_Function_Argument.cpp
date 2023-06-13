#include<iostream>
using namespace std;

class object
{
int a,b,c;
public:
void setvalues(int a1,int b1,int c1) //formal arguments who will take values from actual argument to main function
{
a=a1;     
b=b1;
c=c1;
}

/*PASSING CLASS OBJECTS AS FUNCTION ARGUMENTS*/

//formal object arguments
void classObject(object ob1,object ob2,object ob3)   //these 3 object will have their own variable a b and c
{
int calculate;
calculate=((ob1.a+ob2.a+ob3.a)*(ob1.b+ob2.b+ob3.b)*(ob1.c+ob2.c+ob3.c));
cout<<"Result of the expression :"<<calculate;

a=ob1.a+ob2.a+ob3.a;
b=ob1.b+ob2.b+ob3.b;
c=ob1.c+ob2.c+ob3.c;

cout<<"Complex Number is :"<<a<<"+"<<b<<"i"; 

}
};

int main()
{
object o1,o2,o3,passValues;
o1.setvalues(3,4,5);        //this will set the values of a b and c for o1 object through setvalues function
o2.setvalues(4,7,5);        //this will set the values of a b and c for o2 object through setvalues function
o3.setvalues(9,3,4);        //this will set the values of a b and c for o3 object through setvalues function

//Actual object arguments
passValues.classObject(o1,o2,o3);  //we did set values a b c in o1 o2 o3 now we passing these objects in ob1 ob2 ob3


return 0;  //16 14 14
}