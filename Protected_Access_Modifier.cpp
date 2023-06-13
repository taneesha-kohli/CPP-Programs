#include <iostream>
using namespace std;

class Base
{
protected:   
//Protected access specifier mean this variable will be private but in the case of derived class it can be inherit by that class
    int a;   //in other function like main it can't be accessible , it will behave like private member does, accept to derived classes

    Base(){}
private:
    int b;
public:
int c;

};

/*

For a Protected Member :
                        Public Derivation(visibility)          Private Derivation           Protected Derivation
1. Private Members        NOt Inherited                        NOt Inherited                NOt inherited
2. Protected Members      Protected                            Private                      Protected
3. Public Members         Public                               Private                      Protected

*/

class derived : protected Base    // We can use public and protected members in protected visibility mode , private members can't be inherit in any mode
{
public:

derived()
{
    a=7;     //a is protected member that's why we can access it in protected mode
    c=8;     // c is public member and it would protected in protected visibility mode 
}
void display(){
    cout<<"a is " <<a<<endl;
    cout<<"c is " <<c<<endl;
}
};

int main()
{
derived d;
d.display();
// cout<<d.a;// will not accessible because member declared protected and visibility is also protected 
    return 0;
}