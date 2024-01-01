#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
map<string,int> m1{{"vishnu",19},{"krishan",20},{"laxmi",15},{"manisha",15}};
cout<<"\nTotal elements in m1:"<<m1.size()<<endl;
cout<<"\nElements in map m1:"<<endl;
for(auto x:m1)
cout<<"name "<<x.first<<" "<<"age "<<x.second<<endl;

m1["pooja"]=30;
m1["prakash"]=31;
m1["pooja"]=31;

pair<string,int>p;
p.first="kishan";
p.second=30;
m1.insert(p);

cout<<"\nNew map."<<endl;
for(auto y:m1)
cout<<"name "<<y.first<<" "<<"age "<<y.second<<endl;


string str;
cout<<"\nEnter student name to be searched :";
cin>>str;

map<string,int>::iterator itr;
itr=m1.find(str);
if(itr!=m1.end())
cout<<itr->first<<" "<<"age "<<itr->second<<endl;
else
cout<<"\nNo student exist.";

multimap<string,int>m2;
copy(m1.begin(),m1.end(),inserter(m2,m2.begin()));
p.first="vishnu";
p.second=15;
m2.insert(p);

cout<<"\nMultimap m2."<<endl;
for(auto z:m2)
cout<<"name "<<z.first<<" "<<"age "<<z.second<<endl;
return 0;
}
