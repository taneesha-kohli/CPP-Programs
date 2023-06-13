#include<iostream>
using namespace std;

/* here we have benifit we can dinamically initialise variable without calloc malloc */

//we are using pointer to dynamically initialise variable using NEW, as we could free memory for other variable 
//we use memory than free it up using DELETE which increases memory utilisation 

class sum
{
int a,b;
public:
void setdata(int a1,int b1)
{
    a=a1;
    b=b1;
}
void getdata()
{
    cout<<"a+b : "<<a+b<<endl;
}
};

int main()
{
//POINTER OBJECT    

sum *ptr=new sum;       //it will dynamically create ptr sum type object
(*ptr).setdata(4,5);
(*ptr).getdata();

sum *arr=new sum[4];    //dynamic initialise of POINTER ARRAY OBJECT
arr[0].setdata(3,4);
arr[0].getdata();
arr[1].setdata(8,4);
arr[1].getdata();
arr[2].setdata(3,7);
arr[2].getdata();
arr[3].setdata(3,10);
arr[3].getdata();


//we can deference pointer using ARROW OPERATOR instead of * operator
// (*arr1).setdata()  is similar to arr1->setdata()

sum *arr1=new sum;
arr1->setdata(5,6);
arr1->getdata();
delete arr1;
arr1->getdata();            //now arr1 value will remove memory will free
return 0;
}