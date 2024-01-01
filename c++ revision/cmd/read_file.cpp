#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(int argc,char *argv[]){
if(argc!=2){
cerr<<"\nPlease enter the file name.";
exit(1);
}
char ch;
ifstream infile;
infile.open(strcat(argv[1],".txt"));
if(!infile){
cerr<<"\ncan't open the file.";
exit(1);
}
/*while(infile.get(ch))
cout<<ch;*/
cout<<infile.rdbuf();
return 0;
}
