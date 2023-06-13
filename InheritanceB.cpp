#include <iostream>
using namespace std;

class courses
{
public:
    string coursename;
    int courseid;
    int coursedu;

    courses(string s, int c, int c1)
    {
        coursename = s;
        courseid = c;
        coursedu = c1;
    }

    void getdata()
    {
        cout << "coursename : " << coursename << endl;
        cout << "courseid   : " << courseid << endl;
        cout << "coursedu   : " << coursedu << endl;
    }

    courses(){}     //default constructor to run derived class constructor
};

/*Note:
 after deriving the base class member we can assign values on it's member without making base class object if we will use base class member without inheriting so we can access it's member only through by making it's object
 */

class student :public courses
{
public:
string stuname;          
int stuage;
int stuclass;

//this constructor will not run because courses default constructor doesn't exist , first base class constructor invokes by default so we will have to create default constructor of base class courses

student(string stu,int age,int sclass,string cname,int cid,int cdu)  //cname cid cdu are for courses member
{
stuname=stu;
stuage=age;
stuclass=sclass;
coursename=cname;  //base courses class member
courseid=cid;       //base courses class member
coursedu=cdu;     //base courses class member
}

void getdata()
{
    cout<<"Student Name    : "<<stuname<<endl;
    cout<<"Student age     : "<<stuage<<endl;
    cout<<"Student class   : "<<stuclass<<endl;
    cout<<"Course Name     : "<<coursename<<endl;
    cout<<"Course id       : "<<courseid<<endl;
    cout<<"Course duration : "<<coursedu<<endl;

}
};

int main()
{
courses cob("C++",2,2); 
cout<<"\nMembers of courses class-------------"<<endl<<endl;
cob.getdata();       //it will get data for object cob of class courses
student sob("shivani",21,12,"DBMS",101,2);
cout<<"\nMembers of student class-------------"<<endl<<endl;
sob.getdata();       //sob will get data of student class members
    return 0;
}