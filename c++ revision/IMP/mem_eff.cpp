#include<iostream>
#include<cstring>
using namespace std;

class strcount{
private:
int count;
char *str;
friend class String;

strcount(char *s){
int len=strlen(s);
str=new char[len+1];
strcpy(str,s);
count=1;
cout<<"\nstrcount one arg ctor";
}

~strcount(){
delete[] str;
cout<<"\nstr count dest";
}
};

class String{
private:
strcount *psc;
public:
String(){
psc=new strcount("NULL");
cout<<"\nstring zero arg ctor";
}

String(char *s){
psc=new strcount(s);
cout<<"\nsting one arg ctor";
}
String(String &S){psc=S.psc; (psc->count)++;}

~String(){
if(psc->count==1)
delete psc;
else
(psc->count)--;
}

void display(){
cout<<psc->str;
cout<<"(addr="<<psc<<")";
}

void operator = (String &s){//s1=s2=s3 invalid
if(psc->count==1)
delete psc;
else
(psc->count)--;
psc=s.psc;
(psc->count)++;
}
};

int main(){
 String s3("when the fox preaches");
cout<<"\ns3=";s3.display();

String s1;
s1=s3;
cout<<"\ns1=";s1.display();

String s2(s3);
cout<<"\ns2=";s2.display();
return 0;
}
