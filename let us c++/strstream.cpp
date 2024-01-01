/*#include<iostream>
#include<iomanip>
#include<strstream>
using namespace std;

int main(){
char ch='z';
int i=350;
float a=3.141528f;
char str[]="strstreams at work";
char strr[80];
ostrstream s(strr,80);
s<<"ch = "<<ch<<endl<<"i = "<<hex<<i<<endl<<"a = "<<fixed<<a<<endl<<"str = "<<str<<endl;
cout<<strr;
return 0;
}*/

/*#include<iostream>
#include<iomanip>
#include<strstream>
using namespace std;

int main(){
char ch='z';
int i=350;
float a=3.141528f;
char str[]="strstreams at work";
char strr[80];
ostrstream s;
s<<"ch = "<<ch<<endl<<"i = "<<hex<<i<<endl<<"a = "<<fixed<<a<<endl<<"str = "<<str<<endl;
cout<<s.str();
return 0;
}*/

/////////////////

#include<iostream>
#include<iomanip>
#include<string.h>
#include<strstream>
using namespace std;

int main(){
string name;
string lname="kumar";
cout<<lname.c_str()<<endl;
char strk[strlen(lname.c_str())];
strcpy(strk,lname.c_str());
cout<<strk<<endl;
int age;
char str[]="vishnu 19";
istrstream s(str);
s>>name>>age;
cout<<name<<endl<<age;
return 0;
}
