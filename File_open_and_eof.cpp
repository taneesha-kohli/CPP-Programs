#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    // using open function for opening and writing into the file

ofstream write;
write.open("Read_Write.txt");
write<<"i'm writing on the file\n";
write<<"i'm writing on the file\n";
write<<"i'm writing on the file\n";
write<<"i'm writing on the file\n";

write.close();

ifstream read;
read.open("Read_Write.txt");
string s;

// using eof function to reading file till end of file

while(read.eof()==0)        //eof(end of file) , while loop will contiue till end of file
{
getline(read,s);             //each time one line will get using getline
cout<<s<<endl;               //each time one line will print
}
read.close();
return 0;
}