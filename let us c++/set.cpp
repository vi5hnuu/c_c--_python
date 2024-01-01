#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){
set<int> s1{10,20,55,55,60,70};
set<int ,less<int> > s2{11,22,33,55,8,7,6};
set<int ,greater<int> >s3 {-3,2,5,6,4,8,9};
set<int ,less<int> > s4,s5,s6,s7;
cout<<"\ns1 :";
for(auto x:s1)
cout<<x<<" ";
cout<<endl;

cout<<"\ns2 :";
for(auto y:s2)
cout<<y<<" ";
cout<<endl;

cout<<"\ns3 :";
for(auto z:s3)
cout<<z<<" ";
cout<<endl;

set<int>::iterator itr;

int num;
cout<<"Input a number to be search :";
cin>>num;
itr=find(s1.begin(),s1.end(),num);
if(itr!=s1.end())
cout<<num<<" found in s1."<<endl;
else
cout<<num<<" not found in s1."<<endl;

bool b=includes(s1.begin(),s1.end(),s2.begin(),s2.end());
if(b)
cout<<"\nBoth s1 and s2 are identical."<<endl;

set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s4,s4.begin()));
cout<<"\nUnion of s1 and s2 :";
for(auto m:s4)
cout<<m<<" ";
cout<<endl;

set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s5,s5.begin()));
cout<<"\nintersection of s1 and s2 :";
for(auto n:s5)
cout<<n<<" ";
cout<<endl;

set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s6,s6.begin()));
cout<<"\nset difference of s1 and s2 :";
for(auto o:s6)
cout<<o<<" ";
cout<<endl;

set_symmetric_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s7,s7.begin()));
cout<<"\nset symmetric difference of s1 and s2 :";
for(auto p:s7)
cout<<p<<" ";
cout<<endl;

multiset<int,greater<int> >ms1{2,3,11,-6,11,2};
multiset<int,greater<int> >ms2{8,10,11,8,3,12};
multiset<int,greater<int> >ms3;

cout<<"\nms1 :";
for(auto x:ms1)
cout<<x<<" ";
cout<<endl;

cout<<"\nms2 :";
for(auto y:ms2)
cout<<y<<" ";
cout<<endl;

set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(ms3,ms3.begin()));
cout<<"\nset union of ms1 and ms2 :";
for(auto k:ms3)
cout<<k<<" ";
cout<<endl;

return 0;
}
