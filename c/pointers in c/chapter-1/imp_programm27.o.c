#include<stdio.h>

void display(int *p,int x,int y,int z);
void show(int (*q)[3][4],int x,int y,int z);
void showw(int (*q)[3][4],int x,int y,int z);
void print(int r[][3][4],int x,int y,int z);

void main(){
int a[2][3][4]={
{
1,6,3,4,
5,6,7,8,
9,3,2,1
},
{
2,3,5,7,
4,3,9,2,
1,6,3,6
}
};

//display(a,2,3,4);
//show(a,2,3,4);
showw(a,2,3,4);
//print(a,2,3,4);
}

void display(int *p,int x,int y,int z){
for(int i=0;i<x;i++){
printf("\n");
for(int j=0;j<y;j++){
printf("\n");
for(int k=0;k<z;k++)
printf("%d",*(p+i*y*z+j*z+k));
}}
}
void show(int (*q)[3][4],int x,int y,int z){
int *p;
for(int i=0;i<x;i++){
printf("\n");
for(int j=0;j<y;j++){
printf("\n");
p=q[i][j];
for(int k=0;k<z;k++)
printf("%d",*(p+k));
}}
}

void showw(int (*q)[3][4],int x,int y,int z){
int *p;
int *s;
int *t;
for(int i=0;i<x;i++){
p=*(q+i);//correct  //*q+i mean inside first 2d + ith 1D
//printf("%u\t",*p);
//printf("%u\t",p);
printf("\n");
for(int j=0;j<y;j++){
s=p+j*z;// *(q+i)+j  //s is int pointer so p+j only go one addrees ahead not col address ahead so we used s=p+j*z;
printf("\n");
for(int k=0;k<z;k++){
printf("%d",*(s+k));
}
}
}
}

void print(int r[][3][4],int x,int y,int z){
for(int i=0;i<x;i++){
printf("\n");
for(int j=0;j<y;j++){
printf("\n");
for(int k=0;k<z;k++)
printf("%d",r[i][j][k]);
}}
}
