#include<iostream>
#include<fstream>
using namespace std;

/*int main(){
char ch='x';
int j=72;
double d=6.02;
string str1="vishnu kumar";
string str2="krishan kumar";
ofstream outfile("fdata.txt");
outfile<<ch<<endl<<j<<endl<<d<<str1<<endl<<str2;
cout<<"file written";
return 0;
}*/

int main(){
char ch='x';
int j=72;
double d=6.02;
string str1="vishnu kumar";
string str2="krishan kumar";
ifstream infile("fdata.txt");
infile>>ch>>j>>d>>str1>>str2;
cout<<"file read";
cout<<ch<<endl<<j<<endl<<d<<endl<<str1<<endl<<str2;
return 0;
}
