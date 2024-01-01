#include<iostream>
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
cout<<"\nEnter feet "; s>>d.feet;
cout<<"\nEnter inches "; s>>d.inches;
return s;
}

ostream& operator << (ostream& s,Distance &d){
s<<"\nFeet ";s<<d.feet;
s<<"\nInches ";s<<d.inches;
return s;
}

int main(){
Distance d1,d2;
Distance dist3(11,6.25);
cout<<"\nEnter two distance values :";
cin>>d1>>d2;
cout<<d1<<endl<<d2;
return 0;
}
