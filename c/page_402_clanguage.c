#include<stdio.h>
#include<math.h>


void main(){
int input(int k);
int sqr(int);
int x,y=0;
x=sqr((y=(input(x)))+1);
printf("X= %d",x);
}

int input(int k){
scanf("%d",&k);
return k;
}

int sqr(int m){
return pow(m,2);
}
