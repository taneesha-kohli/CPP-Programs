#include<iostream>
#include<fstream>    //header file for doing files operations

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream
3. ofstream
*/
using namespace std;

int main()
{


    /*   WRITING TO THE FILE

    //opening files using constructor, WRITING INTO THE FILE
    
ofstream write("Read_Write.txt");       //this opens the file
//ofstreaam is used to write on file , through write object,we can create that object with any name by our own
string s="This is my first experience to write in file in c++";
write<<s;          //by doing this, using ofstream write object we will write s string into file

  */

                //  READING FROM THE FILE

ifstream read("Read_Write.txt");     //read from the file
string st;
read>>st;                //this will just take a single string from file not full line 
cout<<st;

//we have to need to use getline to print one line
getline(read,st);                  //this will copy one line in st string from read object
cout<<st;

return 0;
}