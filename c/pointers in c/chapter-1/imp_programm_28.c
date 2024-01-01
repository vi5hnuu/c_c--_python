#include<stdio.h>

#define COL 4
#define ROW 3

void main(){
int *a;
int *fun1();

int (*b)[COL];
int (*fun2())[COL];
int *p;

int (*c)[ROW][COL];
int (*fun3())[ROW][COL];

a=fun1();
printf("\nArray a[][] in main:\n");
for(int i=0;i<ROW;i++){
printf("\n");
for(int j=0;j<COL;j++)
printf("%d",*(a+i*COL+j));
}

b=fun2();
printf("\nArray b[][] in main:\n");
for(int i=0;i<ROW;i++){
printf("\n");
p=b+i;//b+iis not equal to p+i p is int pointer and b in pointer to a single row(col in row)....p increment single address while b increment col*int
for(int j=0;j<COL;j++)
printf("%d",*p++);
}
c=fun3();
printf("\nArray c[][] in main:\n");
for(int i=0;i<ROW;i++){
printf("\n");
for(int j=0;j<COL;j++)
printf("%d",(*c)[i][j]);
}


}



int *fun1(){
static int a[ROW][COL]={
1,2,3,4,
5,6,7,8,
9,0,1,6
};
printf("\nArray a[][] in fun1 :\n");
for(int i=0;i<ROW;i++){
printf("\n");
for(int j=0;j<COL;j++)
printf("%d",a[i][j]);
}
return (int*)a; //why
}

int (*fun2())[COL]{
static int b[ROW][COL]={
9,4,6,4,
1,3,2,1,
7,5,1,6
};
printf("\nArray b[][] in fun2 :\n");
for(int i=0;i<ROW;i++){
printf("\n");
for(int j=0;j<COL;j++)
printf("%d",b[i][j]);
}
return b; //why not (int *) coz its return row of cols
}

int (*fun3())[ROW][COL]{
static int c[ROW][COL]={
6,3,9,1,
2,1,5,7,
4,1,1,6
};

printf("\nArray c[][] in fun3 :\n");
for(int i=0;i<ROW;i++){
printf("\n");
for(int j=0;j<COL;j++)
printf("%d",c[i][j]);
}

//return (int(*)[ROW][COL])c;
return c;
}













