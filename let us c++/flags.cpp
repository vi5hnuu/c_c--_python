#include<iostream>
#include<iomanip>
using namespace std;
/*
int main(){
int i=752;
float a=425;
float b=123.500328f;

char str[]="Fream, then make it happen.";

ios_base::fmtflags oldflags;
oldflags=cout.flags();
cout<<"Current flags = "<<cout.flags()<<endl;
cout<<hex<<i<<endl;
cout<<showbase<<hex<<i<<endl;
cout<<uppercase<<showbase<<hex<<i<<endl;
cout<<dec<<i<<endl;
cout<<internal<<showpos<<setw(10)<<i<<endl;
cout<<i<<endl;

cout<<setfill('0');
cout<<"Fill character "<<cout.fill()<<endl;
cout<<setw(40)<<str<<endl;
cout<<left<<setw(40)<<str<<endl;

cout.precision(6);
cout<<"precision = "<<cout.precision()<<endl;
cout<<showpoint<<showpos<<a<<endl;
cout<<fixed<<b<<endl;
cout<<scientific<<b<<endl;

cout<<"current flag = "<<cout.flags()<<endl;
cout.flags(oldflags);
cout<<"current flags = "<<cout.flags();
return 0;
}*/

/////////////
int main(){
int i=752;
float a=425;
float b=123.500328f;

char str[]="Fream, then make it happen.";

ios_base::fmtflags oldflags;
oldflags=cout.flags();
cout<<"Current flags = "<<cout.flags()<<endl;
cout<<hex<<i<<endl;
cout<<showbase<<hex<<i<<endl;
cout.setf(ios::uppercase);
cout<<showbase<<hex<<i<<endl;
cout<<dec<<i<<endl;
cout<<internal<<showpos<<setw(10)<<i<<endl;
cout<<i<<endl;

cout<<setfill('0');
cout<<"Fill character "<<cout.fill()<<endl;
cout<<setw(40)<<str<<endl;
cout<<left<<setw(40)<<str<<endl;

setprecision(6);
cout<<"precision = "<<cout.precision()<<endl;
setiosflags(ios::showpoint);
cout<<showpos<<a<<endl;
cout<<fixed<<b<<endl;
cout<<scientific<<b<<endl;

cout<<"current flag = "<<cout.flags()<<endl;
cout.flags(oldflags);
cout<<"current flags = "<<cout.flags();
return 0;
}
