#include<iostream>
#include<string.h>
using namespace std;

int main(){
/*//char *str1="Rain rain here again.";//both string is same(this and below one)//though we can make str1  point to another string.
const char *str1="Rain rain here again.";//string is constant so *str1='r' is error
char *&str=str1;
cout<<endl<<str1<<endl<<str;
str=("rain rain here again");
cout<<endl<<str1<<endl<<str;*/

char *p=new char[10];//this string pointed to is not a constant string.
strcpy(p,"Rain Rain");
cout<<p;
*p='r';
cout<<endl<<p;
return 0;
}
