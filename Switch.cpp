#include <iostream>
using namespace std;

int main()
{
    char a;
    int b,c;
cout<<"Enter 2 numbers :"<<endl;
cin>>b>>c;
cout<<"which operation do you want to perform (+,-,*,/)"<<endl;
cin>>a;
switch(a)
{
    case '+':
    cout<<b+c;
    break;
    case '-':
    cout<<b-c;
    break;
    case '*':
    cout<<b*c;
    break;
    case '/':
    cout<<b/c;
    break;
    
}
    return 0;
}