#include<iostream>
using namespace std;
//void disp(int a=5);
 void disp(int=5);
/*void disp(int a=5){
cout<<a;
}*/
inline void disp(int a){
cout<<a;
}

int main(){
disp(2);
disp();
}
