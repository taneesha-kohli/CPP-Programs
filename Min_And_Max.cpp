// #include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[5],max=0,min=0;
    for(int i=0;i<5;i++)
    {
        // printf("Enter the %d element :",i+1);
        // scanf("%d",&arr[i]);
        cout<<"Enter the "<<i+1<<" number"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        int j=i+1;
    
 if(arr[min]>arr[j])
 {
min=j;
 }
 if(arr[max]<arr[j])
 {
    max=j;
 }
    }
    cout<<"min element is :"<<arr[min]<<endl;
    cout<<"max element is :"<<arr[max]<<endl;
    // printf("\nmin element is :%d",arr[min]);
    // printf("\n max number is :%d",arr[max]);
    return 0;
}