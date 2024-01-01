#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;

/*int main(){
list<int> thelist(5);
list<int> ::iterator  iter;
int data=0;
for(iter=thelist.begin();iter!=thelist.end();iter++)
*iter=data+=2;
iter=find(thelist.begin(),thelist.end(),8);
if(iter!=thelist.end())
cout<<"found 8.";
else
cout<<"not found";
return 0;

}*/

int main(){
vector<int> thevec(5);
vector<int> ::iterator  iter;
int data=0;
for(iter=thevec.begin();iter!=thevec.end();iter++)
*iter=data+=2;
iter=find(thevec.begin(),thevec.end(),8);
if(iter!=thevec.end())
cout<<"found 8 at offset "<<iter-thevec.begin();
else
cout<<"not found.";
return 0;

}
