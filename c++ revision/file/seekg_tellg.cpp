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
ifstream infile;
infile.open("group.dat",ios::in|ios::binary);
infile.seekg(0,ios::end);
int endposition=infile.tellg();
int n=endposition/sizeof(person);
cout<<"\nThere are "<<n<<" peron in file";
cout<<"\nEnter person number :";
cin>>n;
int position=(n-1)*sizeof(person);
infile.seekg(position);
infile.read(reinterpret_cast<char*>(&pers),sizeof(person));
pers.showdata();
cout<<endl;
return 0;
}
