/*#include<iostream>
#include<exception>
#include<string>
#include<strstream>;
using namespace std;

#define MAX 4

class Qex : public exception{
private:
string errmsg;
public:
Qex(string str,int front,int rear){
ostrstream s;
s<<str<<endl<<"front "<<front<<endl<<"rear "<<rear<<ends;
errmsg=s.str();
}
string what(){ //exception clss virtual what function
return errmsg;
}
};

class Queue{
private:
int arr[MAX];
int Front,rear;
public:
Queue(){
Front=rear=-1;
}

void addq(int item){
if(rear=MAX-1)
throw Qex("queue is full.",Front,rear);
arr[++rear]=item;
if(Front==-1)
Front=0;
}

int delq(){
int data;
if(Front==-1)
throw Qex("queue is full.",Front,rear);

data=arr[Front];
if(Front==rear)
Front=rear=-1;
else
Front++;
return data;
}
};

int main(){
Queue q;
try{
q.addq(11);
q.addq(22);
q.addq(33);
q.addq(44);
q.addq(55);
int i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
}
catch(Qex &e){
cerr<<endl<<e.what()<<endl;
}
}*/


///////////////////////////////////
///////////////////////////////////
///////////////////////////////////

#include<iostream>
#include<exception>
#include<string>
#include<strstream>;
using namespace std;

#define MAX 4

class Queue{
private:
int arr[MAX];
int Front,rear;
public:
///////////////////
class Qex{
private:
string errmsg;
public:
Qex(string str,int front,int rear){
ostrstream s;
s<<str<<endl<<"front "<<front<<endl<<"rear "<<rear<<ends;
errmsg=s.str();
}
string what(){ //exception clss virtual what function
return errmsg;
}
};
///////////////////
Queue(){
Front=rear=-1;
}

void addq(int item){
if(rear=MAX-1)
throw Qex("queue is full.",Front,rear);
arr[++rear]=item;
if(Front==-1)
Front=0;
}

int delq(){
int data;
if(Front==-1)
throw Qex("queue is full.",Front,rear);

data=arr[Front];
if(Front==rear)
Front=rear=-1;
else
Front++;
return data;
}
};

int main(){
Queue q;
try{
q.addq(11);
q.addq(22);
q.addq(33);
q.addq(44);
q.addq(55);
int i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
i=q.delq();
cout<<"\nItem deleted "<<i;
}
catch(Queue::Qex &e){
cerr<<endl<<e.what()<<endl;
}
}
