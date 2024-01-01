#include<iostream>
#include<algorithm>
using namespace std;


int main(){
int source1[]={11,22,33,44,55,66,77,88};
int source2[]={111,222,333,444,555,666,777,888};
int size=(sizeof(source1)+sizeof(source2))/sizeof(int);
int *dest=new int[size];

merge(source1,source1+sizeof(source1)/sizeof(int),source2,source2+sizeof(source2)/sizeof(int),dest);
for(int i=0;i<size;i++)
cout<<dest[i];
return 0;

}
