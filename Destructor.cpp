#include<iostream>
using namespace std;

int count=0;

class num{
public:
num()   //This is constructor , which will execute when any object will be created in main
{
    count++;
    cout<<"This is the time when constructor is called for object number" <<count<<endl;
}

~num()    //This is Destructor *Destructor doesn't takes any argument* ,we use this syntax for destructor , which executes after running constructor 
{
    cout<<"This is the time when desctructor is called for object number" <<count<<endl;
    count--;
}
};

int main()
{
cout<<"we are inside our main function"<<endl;
cout<<"Creating first object n1"<<endl;
num ob;                                         // First constructor will execute for this object
num ob4;                                        // Then constructor will execute for this
{
    cout<<"Entering this block"<<endl;
    cout<<"Creating two more objects"<<endl;
    num ob2,ob3;                                      // Then for ob2 and ob3 
    cout<<"Exiting this block"<<endl;
}                                       //And because these (ob2,ob3) objects are inside the block so first these 2 objects will destruct 
cout<<"\nReterning to main"<<endl;       //and which object will execute last that will destribute first
return 0;
}