#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

class person{
protected:
char name[40];
int age;
public:
void getdata(){
cout<<"\nEnter last name ";cin>>name;
cout<<"\nEnter age ";cin>>age;
}
void showdata(){
cout<<"\nName "<<name;
cout<<"\nAge "<<age;
}

void diskIn(int);
void diskOut();
static int diskCount();
};

void person::diskIn(int pn){
ifstream infile;
infile.open("persfile.dat",ios::binary);
infile.seekg(pn*sizeof(person));
infile.read(reinterpret_cast<char *>(this),sizeof(*this));
}

int person::diskCount(){
ifstream infile;
infile.open("persfile.dat",ios::binary);
infile.seekg(0,ios::end);
return (int)infile.tellg()/sizeof(person);
}

void person::diskOut(){
ofstream outfile;
outfile.open("persfile.dat",ios::binary|ios::app);
outfile.write(reinterpret_cast<char *>(this),sizeof(*this));
}

int main(){
person p;
char ch;

do{
cout<<"\nEnter data for person :\n";
p.getdata();
p.diskOut();
cout<<"\nDo another (y/n)";
cin>>ch;
}while(tolower(ch)=='y');

int n=person::diskCount();
cout<<"\nThere are "<<n<<" person in the file";
for(int j=0;j<n;j++){
cout<<"\nPerson "<<j;
p.diskIn(j);
p.showdata();
}
getch();
return 0;
}
