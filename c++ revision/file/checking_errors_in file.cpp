#include<iostream>
#include<fstream>
using namespace std;

const int MAX=80;
int buff[MAX];

int main(){
for(int j=0;j<MAX;j++)
buff[j]=j;

ofstream os;
os.open("edata.dat",ios::trunc|ios::binary);
if(!os){
cerr<<"Could not open file.";
exit (1);
}
cout<<"\nWriting.\n";
os.write(reinterpret_cast<char*>(buff),sizeof(int)*MAX);
if(!os){
cerr<<"could not write into file.";
exit(1);
}
os.close();

for(int j=0;j<MAX;j++)
buff[j]=0;

ifstream is;
is.open("edata.dat",ios::binary);
if(!is){
cerr<<"Could not open file.\n";
exit(1);
}
cout<<"\nReading.\n";
is.read(reinterpret_cast<char *>(buff),MAX*sizeof(int));
if(!is){
cerr<<"Error readinf file.\n";
exit(1);
}
for(int j=0;j<MAX;j++)
if(buff[j]!=j){
cerr<<"Wrong data.";
exit(1);
}
cout<<"Date written correctly.";
return 0;
}

