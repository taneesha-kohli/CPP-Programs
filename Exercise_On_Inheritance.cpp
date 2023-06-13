// Multiple Heritance

// #include <iostream>
// #include <cmath>
// using namespace std;

// class simpleCalc
// {
// protected:
//     float a, b;
   

// public:
//     void setnumbers()
//     {
//         cout << "Enter the first number : ";
//         cin >> a;
//         cout << "\nEnter the second number : ";
//         cin >> b;
//     }


//     void operations1()
//     {
//         cout << "a+b : " << a+b << endl;
//         cout << "a-b : " << a-b << endl;
//         cout << "a*b : " << a*b << endl;
//         cout << "a/b : " << a/b << endl;
//     }
// };

// class scientificCalc 
// {
// protected:
//     float a, b;

// public:
//     void set()
//     {
//         cout << "Enter the first number : ";
//         cin >> a;
//         cout << "\nEnter the second number : ";
//         cin >> b;
//     }


//     void operations2()
//     {
//      cout<<"Sin of a : " <<sin(a)<<endl;
//      cout<<"Sin of b : " <<sin(b)<<endl;
//      cout<<"Cos of a : " <<cos(a)<<endl;
//      cout<<"Cos of b : " <<cos(b)<<endl;
//     }
// };

// class hybrid :public simpleCalc,public scientificCalc      //Multiple Inheritance
// {
//     public:
// void print ()
// {
//     setnumbers(); 
//     operations1();
//     cout<<endl;
//     set();
//     operations2();
// }
// };

// int main()
// {
// hybrid h;
// h.print();
    
//     return 0;
// }


// Multilevel Heritance

#include <iostream>
#include <cmath>
using namespace std;

class simpleCalc
{
protected:
    float a, b;
   

public:
    void setnumbers()
    {
        cout << "Enter the first number : ";
        cin >> a;
        cout << "\nEnter the second number : ";
        cin >> b;
    }


    void operations()
    {
        cout << "a+b : " << a+b << endl;
        cout << "a-b : " << a-b << endl;
        cout << "a*b : " << a*b << endl;
        cout << "a/b : " << a/b << endl;
    }
};

class scientificCalc :public simpleCalc
{
protected:
    float a, b;

public:
    void setnumbers()
    {
        cout << "Enter the first number : ";
        cin >> a;
        cout << "\nEnter the second number : ";
        cin >> b;
    }


    void operations()
    {
     cout<<"Sin of a : " <<sin(a)<<endl;
     cout<<"Sin of b : " <<sin(b)<<endl;
     cout<<"Cos of a : " <<cos(a)<<endl;
     cout<<"Cos of b : " <<cos(b)<<endl;
    }
};

class hybrid :public scientificCalc      //Multiple Inheritance
{
    public:
void print ()    //we have ambiguity here so we will have to resolve it
{
    simpleCalc:: setnumbers();    
    simpleCalc:: operations();
    cout<<endl;
    scientificCalc:: setnumbers();   //by doing this ambiguity will resolve here , and it will be easy to understand that which class functions are these 
    scientificCalc:: operations();
}
};

int main()
{
hybrid h;
h.print();
    
    return 0;
}