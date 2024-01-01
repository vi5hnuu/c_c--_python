#include<stdio.h>

#define SET 2
#define ROW 3
#define COL 4

void main(){
int *a;
int *fun1();

int (*b)[COL];
int (*fun2())[COL];

int (*c)[ROW][COL];
int (*fun3())[ROW][COL];
int *p;

int (*d)[SET][ROW][COL];
int (*fun4())[SET][ROW][COL];

a=fun1();
printf("\nArray a[][][] in main:\n");
for(int i=0;i<SET;i++){
printf("\n");
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%d",*a++);
}
}


b=fun2();
printf("\nArray b[][][] in main:\n");
for(int i=0;i<SET;i++){
printf("\n");
p=(int *)(b+i*ROW);
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",*p++);
}
}

c=fun3();
printf("\nArray c[][][] in main:\n");
for(int i=0;i<SET;i++){
printf("\n");
p=(int*)(c+i);
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",(*p++));
}
}

d=fun4();
printf("\nArray d[][][] in main:\n");
for(int i=0;i<SET;i++){
printf("\n");
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",(*d)[i][j][k]);
}
}
}

int *fun1(){
static int a[SET][ROW][COL]={
{
1,2,3,4,
5,6,7,8,
9,3,2,1
},
{
2,3,5,7,
4,3,9,2,
1,6,3,6
}
};

printf("\nArray a[][][] in fun1:\n");
for(int i=0;i<SET;i++){
printf("\n");
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",a[i][j][k]);
}
}
return (int *)a;
}

int (*fun2())[COL]{
static int b[SET][ROW][COL]={
{
9,4,6,4,
1,3,2,1,
7,5,1,6
},
{
6,3,9,1,
2,1,5,7,
4,1,1,6
}
};

printf("\nArray b[][][] in fun2:\n");
for(int i=0;i<SET;i++){
printf("\n");
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",b[i][j][k]);
}
}
return b;
}

int (*fun3())[ROW][COL]{
static int c[SET][ROW][COL]={
{
9,4,6,4,
1,3,2,1,
7,5,1,6
},
{
6,3,9,1,
2,1,5,7,
4,1,1,6
}
};

printf("\nArray c[][][] in fun3:\n");
for(int i=0;i<SET;i++){
printf("\n");
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",c[i][j][k]);
}
}
return c;
}

int (*fun4())[SET][ROW][COL]{
static int d[SET][ROW][COL]={
{
3,1,8,5,
9,6,5,2,
2,0,1,6
},
{
7,3,2,7,
1,4,2,3,
9,1,0,6
}
};

printf("\nArray d[][][] in fun4:\n");
for(int i=0;i<SET;i++){
printf("\n");
for(int j=0;j<ROW;j++){
printf("\n");
for(int k=0;k<COL;k++)
printf("%3d",d[i][j][k]);
}
}
return d;
}




