#include<iostream>
using namespace std;

/*int main(){
const int i=10;
int &j=i;
cout<<i<<endl<<j;
j=20;
cout<<i<<endl<<j;
return 0;
}*/

/*int main(){
int i=10;
const int &j=i;
cout<<i<<endl<<j;
j=20;
cout<<i<<endl<<j;
return 0;
}*/

int main(){
int i=10;
const int &j=i; //cannot change i through j but can change using i
cout<<i<<endl<<j;
i=20;
cout<<i<<endl<<j;
return 0;
}
