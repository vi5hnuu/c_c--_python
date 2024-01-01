#include<iostream>
using namespace std;


int main(){
int ch=90;
cout<<char(65)<<endl;
cout<<char(ch)<<endl;
char str[]="vishnu kumar";
char *p="kumar vishnu";
cout<<str<<endl<<p<<endl;
cout<<&str<<endl<<&p<<"this is addres of p not string"<<endl;
cout<<static_cast<void *>(str)<<endl;
cout<<static_cast<void *>(p);
return 0;
}
