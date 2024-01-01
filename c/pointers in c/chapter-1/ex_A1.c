#include<stdio.h>


void main(){
int a[3][3][3]={
{
1,2,3,
4,5,6,
7,8,9
},
{
2,4,6,
8,10,12,
14,16,18
},
{
3,6,9,
12,15,18,
21,24,27
}
};

int *ptr[]={
a[0][0],a[0][1],a[0][2],
a[1][0],a[1][1],a[1][2],
a[2][0],a[2][1],a[2][2]
};
//int *ptr1[]={a[0],a[1],a[2]};
int *ptr1[]={a,a+1,a+2};
int **ptr2=ptr,i;
printf("\n%u\t%u\n",&a[0][0],ptr);

for(int i=0;i<=8;i++){
printf("%d\t",*ptr2);
ptr2++;
}

printf("\n==========\n");
for(int i=0;i<=2;i++)
printf("%d\t",*(ptr[i]));

printf("\n=============\n");
for(int i=0;i<=8;i++)
printf("%d\t",*ptr[i]);
}
