// #include<iostream>
// using namespace std;

// class cars
// {
// private:
// int speed;
// string color;
// int counter;
// public:

//     void data();
//   void display();

// }car[5];

// void cars::data()
// {
// for(int i=0;i<5;i++)
// {
//     cout<<"Enter " <<i+1 << " car's speed : ";               //FIRST METHOD FOR CREATING ARRAY OF OBJECT
//     cin>>car[i].speed;
//     cout<<"Enter" <<i+1<< "car's color : ";
//     cin>>car[i].color;
// }
// }
// void cars ::display()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"\n car "<<i+1<< " speed : "<<car[i].speed;
//         cout<<"\n car "<<i+1<< " color : "<<car[i].color;
//         cout<<"\n\n";
//     }

// }

// int main()
// {
// cars car;
// car.data();
// car.display();
// return 0;
// }





//IF WE ARE PASSING CLASS TYPE OBJECT SO WE WILL HAVE TO CREATE A FUNCTION WHICH IS TAKING ALSO CLASS OBJECT ARGUMENTS




#include <iostream>
using namespace std;

class cars
{
private:
    int speed;
    string color;
    static int count; // STATIC DATA MEMBER FOR COUNT EACH CAR IN DATA AND DISPLAY FUNCTION
public:
    void data();
    void display();
    void classob(cars ob)
    {
        cout<<"speed is : " <<ob.speed; 
        cout<<"color is : " <<ob.color; 
    }
};

int cars::count;                 //SECOND METHOD FOR CREATING ARRAY OF OBJECT

void cars::data()
{

    cout << "Enter " << count + 1 << " car's speed : ";
    cin >> speed;
    cout << "Enter " << count + 1 << " car's color : ";
    cin >> color;
    count++;
}
void cars ::display()
{

    cout << "\n " << count << " car speed : " << speed;
    cout << "\n " << count << " car color : " << color;
    cout << "\n\n";
}



int main()
{
    cars car[5],ob;                                 //  ARRAY OF OBJECT
    for (int i = 0; i < 5; i++)
    {
        car[i].data();
        car[i].display();
    }

ob.classob(car[0]);  //WE ARE PASSING OBJECT TYPE CAR 
    

    return 0;
}