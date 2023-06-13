#include<iostream>
using namespace std;

class bankDeposite{   //as we can use of constructor overloading , when we want same arguments but in different data type 
    private:
    int principal;
    int year;
    float interestRate;
    float returnValue;

    public:
   
    bankDeposite(int p,int y,float r);  // if user enteres interest rate on float so this constructor will run, where p=principal y=year r=interestrate
    bankDeposite(int p,int y,int r);   //if user enteres interest rate on decimal value so this constructor will run
 void print()
 {
    cout<<"Your entered principal amount was : " <<principal << " returned amount is :"<<returnValue;
 }
};

bankDeposite:: bankDeposite(int p,int y,float r)  
//here we have to found compound interest , where the interest amount adds with our principal amount
{                                                  //and then next year interst is adds with our first year coumpound interest(principal amount+interest)

principal=p;
year=y;
interestRate=r;
for (int i = 0; i < y; i++)
{
returnValue=principal*(1+interestRate);

}


}

bankDeposite:: bankDeposite(int p,int y,int r)
{
principal=p;
year=y;
interestRate=(float)r/100;
for (int i = 0; i < y; i++)
{
returnValue=principal*(1+interestRate);

}


}



int main()
{
int p;
int y;
float r;
int R;
cout<<"Enter the principal , year and interest rate : ";
cin>>p>>y>>r;
bankDeposite ob1(p,y,r);  // when user enteres rate in decimal so we puts that rate in R
ob1.print();
cout<<"\n\nEnter the principal year and interest rate : ";
cin>>p>>y>>R;          // when user enteres rate in decimal so we puts that rate in R
bankDeposite ob2(p,y,R);
ob2.print();
return 0;
}  

 //principal 100 1 year 0.05 OR 5 =105  principal 1000 1year 0.04/4 %rate =1040  