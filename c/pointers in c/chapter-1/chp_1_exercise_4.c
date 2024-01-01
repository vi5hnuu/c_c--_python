#include<stdio.h>

void swap(int*,int*);
void exchange(int**,int*);

void main(){
int c=10,d=20;
printf("Before swap, c=%d\td=%d",c,d);
swap(&c,&d);
printf("\nAfter swap, c=%d\td=%d",c,d);
}

void swap(int *cc,int *dd){
exchange(&cc,dd);
}

void exchange(int **cc,int *dd){
int t;
t=**cc;
**cc=*dd;
*dd=t;
}
