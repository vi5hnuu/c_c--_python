#include<iostream>
using namespace std;

int main(){
//int p[]={10,11,12}; //p++ is invalid
int *p=new int[5];
for(int i=0;i<5;i++)
    p[i]=i;
    //*p++=i;//not wroking why

cout<<*p<<endl;
for(int i=0;i<5;i++)
cout<<*p++;
}
