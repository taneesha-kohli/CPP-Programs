#include<iostream>
using namespace std;

/*
Ambiguity : When we have same functions in both base classes , so in derived class(3rd class which inherited class 1 and class 2)
when we call the function so due to same name of function it would difficult to run a particular function , This calls Ambiguity
and we resolve this by righting class name with "::" this operator of function like - class::function_name();
*/


class Base1{
public:
void greet()
{
    cout<<"Hello"<<endl;
}

};
class Base2{
public:
void greet()
{
    cout<<"Hi"<<endl;
}
};
class derived : public Base1,public Base2{
public:
void greet()
{
    Base1::greet();      //by doing this Base1 class's greet function will run 
    Base2::greet();

//If we will do just greet(); so it will not give us expected output , so we use this when we have same name functions in derived classes

}
};

//We have a another case where also can arise ambiguity ,but it can resolve automatically , let see how 

class A{
public:
void greet()           //here also ambiguity , because same function exits in Base class also in derived class 
{
    cout<<"Hello World"<<endl;
}
};

class B:public A{    //so here if we will run greet function so automatically derived class B greet will execute 
public:
void greet()
{
    cout<<"Hello My World"<<endl;
}
};
int main()
{
B b;
b.greet();  //here compiler automatically executes derived class's greet function ,if derived class function doen't exits so Base class function will execute
return 0;  //but if we have multiple inherited class's function name are same so we will have to resolve ambiguity as we did in beginning 
}