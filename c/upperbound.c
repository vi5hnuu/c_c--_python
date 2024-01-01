/*#include<stdio.h>

void main(){
int a[5]={1,2,3,4,5};
a[5]=6;
a[6]=7;
a[7]=7;
for(int i=0;i<=7;i++)
printf("%d",a[i]);
}*/

//but
//

#include<stdio.h>

void main(){
int a[5]={1,2,3,4,5,6,7,7};

for(int i=0;i<=7;i++)
printf("%d",a[i]);
}
