#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream file;
file.open("group.dat",ios::app);
if(!file)
cout<<"\nCan't open group.dat file";
else{
cout<<"\nFile opened correctly.\n";
cout<<"\nError state "<<file.rdstate();
cout<<"\ngood()"<<file.good();
cout<<"\neof()"<<file.eof();
cout<<"\nfail()"<<file.fail();
cout<<"\nbad()"<<file.bad();
file.close();
return 0;
}
}
