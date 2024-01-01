#include<iostream>
#include<vector>
using namespace std;

class point{
private:
int x,y;
public:
point(int xx=0,int yy=0){
x=xx;
y=yy;
}
friend ostream& operator << (ostream &s,point &p);
};

ostream& operator << (ostream &s,point &p){
s<<p.x<<" "<<p.y<<endl;
return s;
}

int main(){
vector<point> v1;
for(int i=0;i<5;i++)
v1.push_back(point(i+1,i+1));
cout<<"vecctor v1:"<<endl;
for(auto num:v1)
cout<<num;

cout<<"\nfront :";
cout<<v1.front()<<endl;
cout<<"back :";
cout<<v1.back();

vector<point>::reverse_iterator itr;
cout<<"Reverse iterator v1:"<<endl;
for(itr=v1.rbegin();itr!=v1.rend();itr++)
cout<<*itr;

cout<<"\nSize of v1 "<<v1.size()<<endl;

vector<point> v2;
v2.assign(v1.begin(),v1.begin()+3);

cout<<"\nVecotor v2:"<<endl;
for(auto numm:v2)
cout<<numm;
return 0;
}
