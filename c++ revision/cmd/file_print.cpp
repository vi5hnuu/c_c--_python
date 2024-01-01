#include<iostream>
#include<fstream>
#include<string.h>
#include<process.h>
using namespace std;

int main(int argc,char *argv[]){
if(argc!=2){
cerr<<"please enter the file name.\n";
exit(-1);
}
char ch;
ifstream infile;
infile.open(strcat(argv[1],".txt"));
if(!infile){
cerr<<"Unable to open the specified file.";
exit(-1);
}
ofstream ofile;
ofile.open("prn");
while(infile.get(ch)){
ofile.put(ch);
}
ofile.put('\x0C');
return 0;
}
