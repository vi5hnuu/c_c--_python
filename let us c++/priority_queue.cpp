#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;

class task{
private:
string name;
int ppri;
public:
    task(){name="";ppri=0;}
task(string n,int pr){
name=n;
ppri=pr;
}

friend class prioritizetasks;
friend ostream& operator <<(ostream &s,task &t);
};

ostream& operator <<(ostream &s,task &t){
s<<"process :"<<t.name<<" priority :"<<t.ppri<<endl;
return s;
}

class prioritizetasks{
public:
int operator () (const task &t1,const task &t2){
return t1.ppri<<t2.ppri;
}
};

int main(){
priority_queue<task,vector<task>,prioritizetasks > pq;
task arr[]={task("swap",4),task("prnt",17),task("sap",4),task("abc",17),task("s",4),task("esd",17)};
for(auto x:arr)
pq.push(x);

task tk;
while(!pq.empty()){
tk=pq.top();
cout<<tk;
pq.pop();
}
}
