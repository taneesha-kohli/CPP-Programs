#include<iostream>
using namespace std;

/*when we initialises pointer array object and increment it so pointer points last index which is out of bound 
so we have to need to point the pointer to the starting index*/

typedef class student
{
string name;
int marks;
public:
void set(string n,int m)
{
    name=n;
    marks=m;
}
void get()
{
    cout<<"Name  : "<<name<<endl;
    cout<<"Marks : "<<marks<<endl;
}
}s;

int main()
{

/*we will create array of pointer object*/
int size;
cout<<"\n\nHow many student detail do you want ?: ";
cin>>size;

s *ptr=new s[size];
s *ptr1=ptr;           //we will point ptr1 to ptr's first object ptr[0]
string a;
int b;

for(int i=0;i<size;i++)
{
    cout<<"\nEnter "<<i+1<<" student Name : ";
    cin>>a;
    cout<<"\nEnter "<<a<<"'s Total marks : ";
    cin>>b;
   ptr->set(a,b);        //this will look ptr[0].set(a,b) next time it will ptr[1] then ptr[2] and so on.. till size
   ptr++;
}

// for(int j=0;j<size;j++)
// {
//     ptr->get();        
//     ptr++;

//     /*
//     it will not give correct output because when we will assign values for last object let size is 6 so last index is 5 , and we will increment the pointer so it will point 6 index which doesn't exist so we will not get output 
//     so we will have to point out pointer variable to first object which we can do by creating another pointer variable which will point first object 
//     */
// }

for(int j=0;j<size;j++)
{
    ptr1->get();
    ptr1++;
}
return 0;
}