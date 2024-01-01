#include<iostream>
#include<fstream>
using namespace std;
/*
int main(){
string str="Time is a great teacher,but unfortunately"
"it kills all its pupils.";
ofstream outfile("test.txt");
for(int j=0;j<str.size();j++)
outfile.put(str[j]);
cout<<"File written.";
return 0;
}*/
/*
int main(){
//char str;
//char str[80];
string str;
int j=0;
ifstream infile("test.txt");
while(!infile.eof()){
//infile.get(str);
//cout<<str;

infile.get(str[j++]);
}
cout<<str;
cout<<"File written.";
return 0;
}*/

int main(){

ifstream infile("test.txt");
cout<<infile.rdbuf();
cout<<"File written.";
return 0;
}
