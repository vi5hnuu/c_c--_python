#include<iostream>
#include "C:\Users\vishnu kumar\Desktop\let us c++\employee.h"
using namespace std;

employee::employee(){
name=" ";
age=0;
}
employee::employee(string n,int a){
name=n;
age=a;
}

void employee::getdata(){
cout<<"\nEnter name ";cin>>name;
cout<<"\nEnter age ";cin>>age;
}

void employee::showdata(){
cout<<"\nName "<<name;
cout<<"\nAge "<<age;
}
