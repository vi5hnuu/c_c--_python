#include<iostream>
#include<new>;
using namespace std;

void my_allochandler(){
cout<<"Memory allocation failed."<<endl;
abort();
}

int main(){
long *p[100];
set_new_handler(my_allochandler);
for(int i=0;i<100;i++){
p[i]=new long[500000000];
cout<<i<<" Array of long allocated"<<endl;
}

}
