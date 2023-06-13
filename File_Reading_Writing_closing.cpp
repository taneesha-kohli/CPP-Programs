#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream write("Read_Write.txt");         //will open and writes into the file
string s="i'm learning reading writing closing to the file";
write<<s;

write.close();            //closes the file

ifstream read("Read_Write.txt");      //opens and reads the file
string st;
getline(read,st);
cout<<st;

read.close();
return 0;
}