#include <iostream>
using namespace std;

class Bank
{
private:
    string pswd;
    typedef long long lo;
    lo ac;
    
public:
string name="Shivani";
long mob=348934938;

void setdata();
void getdata();

};
void Bank::setdata()
{
cout<<"Enter your Passward    : ";
cin>>pswd;
cout<<"\n Enter your Account number : ";
cin>>ac;

}
void Bank:: getdata()
{
cout<<"Passward : "<<pswd<<endl;
cout<<"Account  : "<<ac<<endl;
cout<<"Name     : "<<name<<endl;
cout<<"mob      : "<<mob<<endl;
}
void withdrawel()
{
    Bank ac1;
    ac1.name="Tanisha";
    ac1.mob=8734834;
 ac1.setdata();

}

int main()
{
    typedef long long lo;
    Bank rec;
rec.name="Shivani";
rec.mob=9873948;
rec.setdata();
rec.getdata();
cout<<"\n\n";
withdrawel();
cout<<endl;
    return 0;
}

