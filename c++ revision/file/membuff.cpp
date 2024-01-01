#include<iostream>
#include<strstream>
#include<iomanip>
using namespace std;

const int size=80;

int main(){
char ch='x';
int j=77;
double d=67890.12345;
char str1[]="vishnu kumar";
char str2[]="krishan kumar";

char membuff[size];
ostrstream omem(membuff,size);
omem<<"ch="<<ch<<endl<<"j="<<j<<endl<<setiosflags(ios::fixed)<<setprecision(2)<<"d="<<d
<<endl<<"str1="<<str1<<endl<<"str2="<<str2<<endl<<ends;
cout<<membuff;
}
