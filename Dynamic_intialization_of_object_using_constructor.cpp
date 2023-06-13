#include <iostream>
using namespace std;



class Bankdeposit
{
    int principal; // principal amount which user will enter
    int year;      // years for returning the amount
    float interestRate;
    float compoundInterest = 0;

public:
    Bankdeposit(int p, int y, int R)
    {
        float interest;
        principal = p;
        year = y;
        interestRate = R;    
        for (int i = 0; i < y; i++)
        {
            interest = principal * (interestRate/100);         //this is normal interest
            compoundInterest = interest + compoundInterest;   //each year interest sum would compound interest
            principal = principal + interest;                //each year interest will add on principal amount 
                                                        
        }
    }
    Bankdeposit(int p, int y, float r)
    {
        float interest;
        principal = p;
        year = y;
        interestRate = r;        
        for (int i = 0; i < y; i++)
        {
            interest = principal * interestRate;     //float r is calculated value of (interestrate/100)
            compoundInterest = interest + compoundInterest;
            principal = principal + interest;
        }
    }

    void show()
    {
        cout<<"\nCompound Interest is :"<<compoundInterest<<endl;
        cout<<"\nAfter compound interest Principal Amount is :"<<principal<<endl;
    }
};

int main()
{
    int p, y;
    float r;
    int R;
    cout << "Enter the principal amount,year,interestRate :";
    cin >> p >> y >> r;
    Bankdeposit ob1(p, y, r);
    ob1.show();
    cout << "\nEnter the principal amount,year,interestRate :";
    cin >> p >> y >> R;
    Bankdeposit ob2(p, y, R);
    ob2.show();

    return 0;
}