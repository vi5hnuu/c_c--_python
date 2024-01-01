#include<iostream>
#include<fstream>
#include<typeinfo>
#include<typeinfo>
#include<process.h>
using namespace std;

const int LEN=32;
const int MAXEM=100;

enum employee_type{tmanager,tscientist,tlabour};

class employee{
private:
char name[LEN];
unsigned long number;
static int n;
static employee *arrap[];

public:
virtual void getdata(){
cin.ignore(10,'\n');
cout<<"\nEnter name ";cin>>name;
cout<<"\nEnter number ";cin>>number;
}

virtual void putdata(){
cout<<"\nName "<<name;
cout<<"\nNumber "<<number;
}

virtual employee_type  get_type();
static void add();
static void display();
static void read();
static void write();
};

int employee::n;
employee* employee::arrap[MAXEM];

class manager : public employee{
private:
char title[LEN];
double dues;
public:
void getdata(){
employee::getdata();
cout<<"\nEnter title";cin>>title;
cout<<"\nEnter golf club dues ";cin>>dues;
}

void putdata(){
employee::putdata();
cout<<"\nTitle "<<title;
cout<<"\nGolf club dues "<<dues;
}
};

class scientist : public employee{
private:
int pubs;
public:
void getdata(){
employee::getdata();
cout<<"\nEnter number of pubs ";cin>>pubs;
}
void putdata(){
employee::putdata();
cout<<"\nNumber of publications "<<pubs;
}
};

class labour : public employee{

};


void employee::add(){
char ch;
cout<<"\'m\' to add manager"
"\n\'s\' to add scientist"
"\n\'l\' to add labour"
"\nEnter selection :";
cin>>ch;
switch(ch){
case  'm':arrap[n]=new manager; break;
case  's':arrap[n]=new scientist; break;
case  'l':arrap[n]=new labour; break;
default:cout<<"\nUnknown employee type.";return ;
}

arrap[n++]->getdata();
}

void employee::display(){
for(int j=0;j<n;j++){
cout<<(j+1);
switch(arrap[j]->get_type()){
case tmanager: cout<<". type :Manager."; break;
case tlabour: cout<<". type :Labour."; break;
case tscientist: cout<<". type :Scientis."; break;
default:cout<<". type :Unknown.";
}
arrap[j]->putdata();
cout<<endl;
}
}

employee_type employee::get_type(){
if(typeid(*this)==typeid(manager))
return tmanager;
else if(typeid(*this)==typeid(scientist))
return tscientist;
else if(typeid(*this)==typeid(labour))
return tlabour;
else{
cerr<<"\nBad employee type"; exit(1);
}
}

void employee::write(){
int size;
cout<<"\nWriting "<<n<<" employees.\n";
ofstream ouf;
employee_type etype;
ouf.open("employ.dat",ios::app |ios::binary);
if(!ouf){
cout<<"\ncat't open file.";
return;
}
for(int j=0;j<n;j++){
etype=arrap[j]->get_type();
ouf.write((char*)&etype,sizeof(etype));
switch(etype){
case tmanager:size=sizeof(manager); break;
case tlabour:size=sizeof(labour); break;
case tscientist:size=sizeof(scientist); break;
}
ouf.write((char *)(arrap[j]),size);
if(!ouf){
cout<<"\ncan't write the file.";
return;
}
}
}

void employee::read(){
int size;
employee_type etype;
ifstream inf;
inf.open("employ.dat",ios::binary);
if(!inf){
cout<<"\ncan't open file.";
return;
}
n=0;
inf.seekg(0);
while(true){
inf.read((char*)&etype,sizeof(etype));
if(inf.eof())
break;
if(!inf){
cout<<"\ncan't read type from file.";
return;
}
switch(etype){
case  tmanager:arrap[n]=new manager;
size=sizeof(manager);
 break;
case  tscientist:arrap[n]=new scientist;
size=sizeof(scientist);
break;
case  tlabour:arrap[n]=new labour;
size=sizeof(labour);
break;
default:cout<<"\nUnknown type.";return ;
}
inf.read((char*)arrap[n],size);
if(!inf){
cout<<"\ncan't read data from file.";
return;
}
n++;
}
cout<<"Readin "<<n<<" employee.\n";
}

int main(){
char ch;
while(true){
cout<<"'a' Add data for an employyee"
"\n'd' Display data for an employee"
"\n'w' write all employee to file"
"\n'r' read all employee from file"
"\n'x' to exit"
"\nEnter selection :";

cin>>ch;

switch(ch){
case 'a': employee::add(); break;
case 'd': employee::display(); break;
case 'w': employee::write(); break;
case 'r': employee::read(); break;
case 'x':exit(0);
default: cout<<"\nUnknown command.";
}
}
return 0;
}
