#include <iostream>
using namespace std;

class students
{
    int id;
     
    static int count; // STATIC DATA MEMBERS
 

public:
    void data();
    void display();
    static void getcount()  //STATIC FUNCTION ,WhiCH CAN ACCESS ONLY STATIC DATA MEMBER JUST USING CLASS NAME WITHOUT OBJECT
    {
        cout<<"The value of count is :" <<count<<endl;
    }
 
};

 int students:: count;

void students ::data()
{
cout<<"Enter the id of " <<count+1<<" student : ";
cin>>id;
count++;
}

void students::display()
{
    
        cout<<"\nid of " << count<<" student is :" <<id<<endl;
      
    
}
int main()
{
    students st1,st2,st3;
   
    st1.data();
    st1.display();
  students::getcount();
    st2.data();
    st2.display();
  students::getcount();

    st3.data();
    st3.display();
  students::getcount();
    
    return 0;
}