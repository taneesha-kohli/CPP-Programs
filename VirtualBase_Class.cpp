#include<iostream>
using namespace std;
/*
Student -->Test
Student -->Sports
Test -->Result
Sports -->Result
*/

class student{
protected:
int roll_no;
public:
void set_no(int r)
{
roll_no=r;
}
void print_no()
{
    cout<<"Your roll number is : "<<roll_no<<endl;
}
};
class test:virtual public student        //we declared virtual public because we are inheriting student class 2 time by 2 classes and then we have created 
{                                       //a result class which is inheriting both test and sports so in this case , student class will inherit 2 times in result class
     //so for resolving this Ambiguity we have inherited student class by doing virtual , now in result class student class will call one time
protected:
float maths,physics;
public:
void set_marks(float m,float p)  
{
    maths=m;
    physics=p;
}
void print_marks(void)
{
    cout<<"You have obtained "<<endl
        <<"Maths   :"<<maths<<endl
        <<"Physics :"<<physics<<endl;
}

};
class sports:virtual public student{
protected:
float score;
public:
void set_score(float s)
{
    score=s;
}
void print_score()
{
    cout<<"YOur score is " <<score<<endl;
}
};

class result:public test,public sports{     
private:
float total;
public:
void display(void)
{
    total=physics+maths+score;
    print_no();
    print_marks();
    print_score();
    cout<<"Your total score is : "<<total<<endl;
}
};

int main()
{
result ob;
ob.set_no(3487434);
ob.set_marks(80.8,90.0);
ob.set_score(9);
ob.display();

return 0;
}