#include<iostream>
#include<fstream>
using namespace std;


class person{
protected:
char name[80];
short age;
public:
void getdata(){
cout<<"\nEnter name :";cin>>name;
cout<<"\nEnter age :";cin>>age;
}

void showdata(){
cout<<"\nName "<<name;
cout<<"\nAGE "<<age;
}
};

int main(){
person pers;
char ch;
fstream file;
file.open("group.dat",ios::binary| ios::out|ios::in|ios::app);

do{
cout<<"\nEnter the persons data.\n";
pers.getdata();
file.write(reinterpret_cast<char *>(&pers),sizeof(person));
cout<<"\nEnter another person (y/n)";
cin>>ch;
}while(tolower(ch)=='y');
file.seekg(0);

file.read(reinterpret_cast<char *>(&pers),sizeof(person));
while(!file.eof()){
cout<<"\nPerson :";
pers.showdata();
file.read(reinterpret_cast<char *>(&pers),sizeof(person));
}
cout<<endl;
return 0;
}
