#include<iostream>
using namespace std;

int main()
{
int *ptr = new int (4);     //dynamic initialisation of variable
cout<<"Value of ptr is :"<<*ptr<<endl;
delete ptr;                //dynamic initialised variable will delete
cout<<"value of ptr is :"<<*ptr<<endl;  

int *arr = new int[3];
arr[0]=20;     
arr[1]=23;
arr[2]=34;
cout<<"Value of arr[0] "<<arr[0]<<endl;
cout<<"Value of arr[1] "<<arr[1]<<endl;
cout<<"Value of arr[2] "<<arr[2]<<endl;

delete[] arr;      //array will be deleted  memory will be free

cout<<"Value of arr[0] "<<arr[0]<<endl;
cout<<"Value of arr[1] "<<arr[1]<<endl;
cout<<"Value of arr[2] "<<arr[2]<<endl;

return 0;
}