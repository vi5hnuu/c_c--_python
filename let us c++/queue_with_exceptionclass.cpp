#include<iostream>
#include<exception>
using namespace std;

#define MAX 4

class queue{
private:
int arr[MAX];
int front,rear;
public:
queue(){
front=rear=-1;
}

void addq(int item){
if(rear=MAX-1)
//throw exception("Queue is full.");
throw out_of_range("queue is full.");
arr[++rear]=item;
if(front==-1)
front=0;
}

int delq(){
int data;
if(front==-1)
//throw exception("Queue is empty.");
throw out_of_range("queue is full.");

data=arr[front];
if(front==rear)
front=rear=-1;
else
front++;
return data;
}
};

int main(){
queue q;
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
catch(exception &e){
cout<<endl<<e.what()<<endl;
}
}
