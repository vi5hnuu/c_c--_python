#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;

class Distance{
private:
int feet;
float inches;
public:
Distance():feet(0),inches(0.0){}
Distance(int ft,float inc):feet(ft),inches(inc){}

friend istream& operator >>(istream&,Distance &d);
friend ostream& operator <<(ostream&,Distance &d);
};

istream& operator >> (istream& s,Distance &d){
/*cout<<"\nEnter feet "; s>>d.feet;
cout<<"\nEnter inches "; s>>d.inches;
*///space will create problem while retriving
char dummy;
s>>d.feet>>dummy>>d.inches;
return s;
}

ostream& operator << (ostream& s,Distance &d){
s<<d.feet<<'-';
s<<d.inches;
return s;
}

int main(){
char ch;
Distance dist1;
ofstream ofile;
//ofile.open("Dist.dat",ios::trunc|ios::binary);
ofile.open("Dist.txt",ios::trunc|ios::binary);

do{
    cout<<"\nEnter distance ";cin>>dist1;
    ofile<<dist1<<endl;
    cout<<"\nEnter another (y/n)";
cin>>ch;
cin.ignore(10,'\n');
}while(tolower(ch)=='y');
ofile.close();
//sleep(10);
ifstream ifile;
//ifile.open("Dist.dat",ios::binary);
ifile.open("Dist.txt",ios::binary);

while(!ifile.eof()){
    ifile>>dist1;
    cout<<"Distance "<<dist1<<endl;
}
return 0;
}
