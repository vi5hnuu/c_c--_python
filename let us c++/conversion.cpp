#include<iostream>
#include<string.h>
using namespace std;

class String{
private:
char str[20];
public:
String(){
str[0]='\0';
}
String(char *s){
strcpy(str,s);
}
String(int a){
itoa(a,str,10);
}
operator int(){
return atoi(str);
}
void display(){
cout<<str<<endl;
}
};

int main(){
String s1=123;
cout<<"s1 = ";
s1.display();

s1=150;
cout<<"s1 = ";
s1.display();
String s2("123");
int i=int(s2);
cout<<"i = "<<i;

String s3("456");
i=s3;
cout<<"\ni = "<<i<<endl;

 return 0;
}
