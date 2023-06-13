#include<iostream>
using namespace std;

class car {
    public:
 string color;
 string speed;

 car(){}
};

class bike : public car{
public:
int prize;
 bike(string c,string s,int p)
 {
    color=c;
    speed=s;
 prize=p;

 }

};

int main()
{
bike b("pink","2km/s",14000);
cout<<"Color : "<<b.color<<endl;
cout<<"Speed : "<<b.speed<<endl;
cout<<"Prize : "<<b.prize<<endl;
return 0;
}