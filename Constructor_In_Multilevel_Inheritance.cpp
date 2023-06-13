#include<iostream>
using namespace std;

class student
{
string name;
int id;
public:
student(string n,int i)
{
    name=n;
    id=i;
}
void get()
{
    cout<<"Student Name : "<<name<<endl;
    cout<<"student id : "<<id<<endl;
}
student(){}
};

class faculty:public student
{
string fname;
int age;
public:
faculty(string fn,int a,string sname,int sid):student(sname,sid)
{
    fname=fn;
    age=a;  
}
void get()
{
    cout<<"Faculty Name : "<<fname<<endl;
    cout<<"Faculty age : "<<age<<endl;
}
faculty(){}
};

class university:public faculty
{
string uniname;
public:
  university(string uname,string facname,int fage,string stuname,int stuid):faculty(facname,fage,stuname,stuid)
 {
uniname=uname;
student::get();
faculty::get();
cout<<"University Name :"<<uniname<<endl;
 }
};
int main()
{
    university ob("UOU","Shivani",21,"Tanisha",2001);
return 0;
}