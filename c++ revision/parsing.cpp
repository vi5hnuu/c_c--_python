#include<iostream>
#include<string.h>
using namespace std;

const int MAX=40;
const int LEN=80;

class stack{
private:
char st[MAX];
int top;

public:
stack(){top=0;}
void push(char var){st[++top]=var;}
char pop(){return st[top--];}
int gettop(){return top;}
};

class expression{
private:
stack s;
char *pstr;
int len;
public:
expression(char *ptr){
pstr=ptr;
len=strlen(pstr);
}

void parse();
int solve();
};

void expression::parse(){
char ch;
char lastval;
char lastop;

for(int j=0;j<len;j++){
ch=pstr[j];

if(ch>='0' && ch<='9')
s.push(ch-'0');

else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
if(s.gettop()==1)
s.push(ch);
else{
lastval=s.pop();
lastop=s.pop();

if((ch=='*' || ch=='/') && (lastop=='+' || lastop=='-')){
s.push(lastop);
s.push(lastval);
}
else{
switch(lastop){
case '+': s.push(s.pop()+lastval);break;
case '-': s.push(s.pop()-lastval);break;
case '*': s.push(s.pop()*lastval);break;
case '/': s.push(s.pop()/lastval);break;
default:cout<<"Unknown operator.";exit(0);
}
}
s.push(ch);
}
}
else{
cout<<"\nUnknown input character.\n";
exit(0);
}
}
}

int expression::solve(){
char lastval;
while(s.gettop()>1){
lastval=s.pop();
switch(s.pop()){
case '+': s.push(s.pop()+lastval);break;
case '-': s.push(s.pop()-lastval);break;
case '*': s.push(s.pop()*lastval);break;
case '/': s.push(s.pop()/lastval);break;
default:cout<<"Invalid operator.";exit(0);
}
}
return int(s.pop());
}

int main(){
char ans;
char str[LEN];

cout<<"\nEnter the arithmatic expression"
"\nof the form 2+3*4/3-2"
"\nNo number may have more than one digit."
"\nDon\'t use any space or parenthesis.";

do{
cout<<"Enter the Expression :";
cin>>str;
expression *eptr=new expression(str);
eptr->parse();
cout<<"\nThe numerical value is  "<<eptr->solve();
delete eptr;
cout<<"\nDo another (Enter y/n)";
cin>>ans;
}while(tolower(ans)=='y');
return 0;
}
