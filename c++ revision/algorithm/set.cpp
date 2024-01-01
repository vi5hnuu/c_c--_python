#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

int main(){
string name[]={"vishnu","krishan","laxmi","pooja","praksh","manisha"};
set<string ,less<string> > nameset(name,name+6);
set<string ,less<string> >::iterator iter;

nameset.insert("babu");
nameset.insert("kishan");
nameset.insert("kishan");
nameset.insert("dayapal");
nameset.erase("dayapal");

cout<<"\nSize of set is "<<nameset.size()<<endl;

iter=nameset.begin();

while(iter!=nameset.end())
cout<<*iter++<<endl;

string searchname;
cout<<"\nEnter name to search for :";
cin>>searchname;

iter=nameset.find(searchname);
if(iter==nameset.end())
cout<<"\nFiailed to find the name.";
else
cout<<"The name "<<*iter<<" is in the set";
cout<<endl;
return 0;
}
