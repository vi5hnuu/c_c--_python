#include<stdio.h>

/*void main(){
int i=1,j=1,*p;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
p=&a[0][0];
for(int i=0;i<9;i++){
printf("%d\t%u",*p,p);
p++;
printf("\n");
}
}*/
/*
void main(){
int i=1,j=1,*p;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
p=a;
for(int i=0;i<9;i++){
printf("%d\t%u",*p,p);
p++;
printf("\n");
}
}*/
/*
void main(){
int i=1,j=1,*p;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
p=a[0];
for(int i=0;i<9;i++){
printf("%d\t%u",*p,p);
p++;
printf("\n");
}
}*/
/*
void main(){
int i=1,j=1,*p;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
p=&a[0];
for(int i=0;i<9;i++){
printf("%d\t%u",*p,p);
p++;
printf("\n");
}
}*/

///////////////////////////////////////////////////
//////////////////////////////////////////////////

/*
void main(){
int i=1,j=1,*p;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
p=a[1];
for(int i=0;i<6;i++){
printf("%d\t%u",*p,p);
p++;
printf("\n");
}
}*/

void main(){
int i=1,j=1,*p;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
p=&a[1];
for(int i=0;i<6;i++){
printf("%d\t%u",*p,p);
p++;
printf("\n");
}
}

