#include<iostream>
using namespace std;


int main(){
int i;
while(true){
cout<<"Enter the Number :";
cin.unsetf(ios::skipws);
cin>>i;//5,5.5,a vishnu etc
if(cin.good()){
cin.ignore(10,'\n');
break;
}
cin.clear();
cout<<"Incorrect Input.\n";
cin.ignore(10,'\n');
}
cout<<"number :"<<i;
return 0;
}
