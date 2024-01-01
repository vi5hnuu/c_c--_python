#include<iostream>
using namespace std;

void display(char *);

/*int main(){
const char *p="hey there!";
display(const_cast<char *>(p));
//display((p));
return 0;
}

void display(char *p){
//*p='h';//p is pointing to a const string
cout<<p<<endl;
}*/

/*int main(){
const char *p="hey there!";
display(const_cast<char *>(p));
//display((p));
return 0;
}

void display(char *p){
//p[0]='H';
cout<<p<<endl;
}*/


int main(){
//char *p="hey there!";
char *const p="hey there!";
//display(const_cast<char *>(p));
//p="vishnu"; //cant change here
display((p));
return 0;
}

void display(char *p){
    p="vishnu";
cout<<p<<endl;
}
