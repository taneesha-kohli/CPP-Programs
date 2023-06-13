#include<iostream>
using namespace std;
#include <math.h> 
 class point{
 int x,y;
 friend void distance(point a1,point a2);
 public:
 point(int a,int b)
 {
    x=a;
    y=b;
 }

 void display()
 {
    cout<<x<<","<<y<<endl;
 }
 };

void distance(point p1,point p2)
{
 int s,t;
 s=((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y));   //formula for finding the distance between 2 points 
 t=sqrt(s);                                              //function for printing the sqare root of any number
 cout<<"Distance of X and Y Cordinate is : " <<t;
}

int main()
{
point p(1,0);
point p1(70,0);
p.display();
p1.display();
distance(p,p1);
return 0;
}