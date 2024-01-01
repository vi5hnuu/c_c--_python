#include<iostream>
#include<string.h>
using namespace std;

const char *h(){
const char *p="vishnu";//it should not work  //delete wont work in main
/*
//best way and you can see delete []p work in main function as well as mem is allocated
char *p=new char[10];
//p="vishnu";//do not do this as it now make p point to something new address(memory leak);
strcpy(p,"vishnu");//copy string on allocated memory
*/
//static char *p;

//char *q=p;
const char *q=p;

//delete[] p;
//delete[] q;return p;
}

int main(){
const char *p=h();
cout<<p;
cout<<endl<<p[0];
delete[] p;
//cout<<p;//cant work
cout<<"hey";
}
