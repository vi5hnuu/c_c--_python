#include<iostream>
#include<deque>
using namespace std;

int main(){
deque<int> deq;

deq.push_back(30);
deq.push_back(40);
deq.push_back(50);
deq.push_front(20);
deq.push_front(20);
deq[0]=10;
for(int i=0;i<deq.size();i++){
cout<<deq[i]<<' ';
}
return 0;
}
