#include<iostream>
using namespace std;

  class complex;   //forward declaration , if we using that class which we didn't created yet so we use forward declaration

class sumcomplex{
  public:
  int sum(complex,complex);
  int sum2(complex,complex);
};

class complex{
int a,b;
friend class sumcomplex;
public:
void setdata(int a1,int b1)
{
    a=a1;
    b=b1;
}

};

int sumcomplex::sum(complex ob1,complex ob2)
{
return (ob1.a+ob2.a);

}
int sumcomplex::sum2(complex ob1,complex ob2)
{
return(ob1.b+ob2.b);
}

int main()
{
    complex ob1,ob2;
    ob1.setdata(2,3);
    ob2.setdata(4,5);
  sumcomplex ob3,ob4;
 int sum1=ob3.sum(ob1,ob2);
cout<<"Sum is : " <<sum1<<endl;
int sum3=ob4.sum2(ob1,ob2);
cout<<"Sum is : " <<sum3<<endl;
return 0;
} 