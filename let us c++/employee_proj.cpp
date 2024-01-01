#include<iostream>
#include "employee.h"
using namespace std;

int main(){
employee e1("sanjay",34);
e1.showdata();
employee e2;
e2.getdata();
e2.showdata();
return 0;
}
