#include<iostream>
#include<fstream>
using namespace std;

int main(){
char *s1="hey there";
int n1=17982;
ofstream ofile;
ofile.open("prn");
ofile<<s1<<n1<<endl;
ofile<<'\x0C';
return 0;
}
