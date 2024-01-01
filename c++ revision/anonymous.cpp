#include<iostream>
using namespace std;

/*struct employee{
int data;

union{
int dataa;
};
};*/

struct employee{
int data;

union a{
int dataa;
}b;
};
/*
int main(){
employee e;
e.dataa=5;
cout<<e.dataa;
}*/

int main(){
employee e;
e.b.dataa=5;
cout<<e.b.dataa;
}
