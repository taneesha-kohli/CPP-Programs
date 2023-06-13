#include <iostream>
using namespace std;


    

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a=v1;
        b=v2;
    }
    void setbysum(complex c1 ,complex c2)   //using class object we are accessing a and b (o1 and o1 is complex class's object)
    {
        a=c1.a+c2.a; // 1+2i.a +3+4i      // we created complex type object because we are calling class complex type object c1 and c2
        b=c1.b+c2.b;
    }
    void printnumber()
    {
        cout<<"Complex number is "<<a<< "+" <<b<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3,c4;
    c1.setdata(1,2);  // c1 object's a and b (a=1,b=2)
    c1.printnumber();
    c2.setdata(3,4);  //c2 object's a and b (a=3 ,b=4)
    c2.printnumber();
    c3.setbysum(c1,c2);    //we are passing complex object c1 and c2   
    c3.printnumber();

    return 0;
}