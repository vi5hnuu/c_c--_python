#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
string name;
int pop;
string states[]={"wyoming","olorado","navada","montana","arizona","idaho"};
int pops[]={10,20,30,40,50,60};
map<string ,int ,less<string> > mapstates;
map<string ,int ,less<string> > ::iterator iter;

for(int j=0;j<6;j++){
    name=states[j];
    pop=pops[j];
    mapstates[name]=pop;
}

cout<<"\nEnter state :";
cin>>name;
pop=mapstates[name];
cout<<"\npopulation of "<<name<<" is "<<pop<<"000\n";
cout<<endl;
for(iter=mapstates.begin();iter!=mapstates.end();iter++)
    cout<<(*iter).first<<' '<<(*iter).second<<",000\n";
    return 0;
}
