#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:  //if these function would be protected so we could be able to use these function inside our derived class function not outside like main or other function

    void set_number(int);
    void get_number(void);
};

void student::set_number(int r)
{
    roll_number = r;
}
void student::get_number()
{
    cout << "Roll Number is : " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void exam::get_marks()
{
    cout << "The marks obtained maths are  : " << maths << endl;
    cout << "The marks obtained physics are : " << physics << endl;
}

class result : public exam     //because we inherited exam class which is also derived from student class so we can use both class function as well as protected and public member freely
{
    float percentage;

public:
    void display()
    {
        get_number();       //befor calling get function we have to need to set our members using set function , as we did in  main 
        get_marks();
        cout << "Your percentage is : " << (maths + physics) / 2 << endl;
    }
};

int main()
{
result r;
r.set_number(3434);
r.set_marks(90.9,99.0);
r.display();
    return 0;
}