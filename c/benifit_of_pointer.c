/*#include<stdio.h>
#include<string.h>

void main(){
int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//printf("\n%d",strlen(a));
//printf("\n%d",strlen(a[0]));  //strlen===str+len==length of string not int..so dont use.
for(int i=0;i<5;i++){
for(int j=0;j<5;j++)
printf("%5d",a[i][j]);
printf("\n");
}
}*/


////////////////

#include<stdio.h>
#include<string.h>

void main(){
int *p,a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
p=a;
for(int j=0;j<25;j++)
printf("%3d",*(p+j));
}
