#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

bool cmpr(char *,char *);

int main(){
char *names[]={"vishnu","krishan","laxmi","pooja","manisha","prakash"};

sort(names,names+6,cmpr);

for(int i=0;i<6;i++)
cout<<names[i]<<endl;
return 0;
}

bool cmpr(char *x,char *y){
return (strcmp(x,y)<0) ? true : false;
}
