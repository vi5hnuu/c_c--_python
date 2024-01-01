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
person p;
pers.getdata();

ofstream outfile("person.dat",ios::binary);
outfile.write(reinterpret_cast<char *>(&pers),sizeof(pers));
outfile.close();

ifstream infile("person.dat",ios::binary);
infile.read(reinterpret_cast<char *>(&p),sizeof(person));
p.showdata();
return 0;
}
