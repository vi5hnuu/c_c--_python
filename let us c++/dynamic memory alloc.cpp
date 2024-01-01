#include<iostream>
using namespace std;

int main(){
int i=5;
float j=5.5;
char ch='a';

int *ii=new int;
float *jj=new float;
char *kk=new char;
*ii=6;
*jj=5.6;
*kk='c';

cout<<i<<j<<ch<<endl;
cout<<*ii<<*jj<<*kk;

delete ii;
delete jj;
delete kk;
return 0;
}
