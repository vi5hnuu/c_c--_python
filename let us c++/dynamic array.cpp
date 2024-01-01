#include<iostream>
using namespace std;


/*int main(){
int n;
cout<<"how many :";
cin>>n;
int *p=new int[n]; //decision and allocation at run time.
for(int i=0;i<n;i++){
p[i]=i;
}

for(int i=0;i<n;i++){
    cout<<p[i];
}

delete[] p;
return 0;
}*/
/*
int main(){
int n;
cout<<"how many :";
cin>>n;
int p=int[n];//decision has to be made at compilation so n needed
for(int i=0;i<n;i++){
p[i]=i;
}

for(int i=0;i<n;i++){
    cout<<p[i];
}

delete[] p;
return 0;
}*/

int main(){
int *p=new int(5);
cout<<*p;
delete p;
return 0;
}
