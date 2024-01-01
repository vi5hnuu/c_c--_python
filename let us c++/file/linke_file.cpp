#include<iostream>
#include<fstream>
using namespace std;

int main(){
string source,target;
char str[21];

cout<<"\nEnter source file name :";
cin>>source;
cout<<"\nEnter target file name :";
cin>>target;

ifstream ifile(source);
ofstream ofile(target);
while(ifile){
ifile.getline(str,21,'\n');
ofile<<str<<endl;
}
ifile.close();
ofile.close();

ifstream iifile(target);
while(iifile){
iifile>>str;
cout<<str;
}
ifile.close();
return 0;
}
