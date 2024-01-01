#include<stdio.h>
/*#define swap(x,y) x=x+y;y=x-y;x=x-y;
void main(){
int a=2,b=3;
swap(a,b);
printf("%d %d",a,b);
}*/

/*#define swap(x,y) int z;z=x;x=y;y=z; //specific for int values
void main(){
int a=2,b=3;
swap(a,b);
printf("%d %d",a,b);
}*/
/*#define swap(x,y,c) c z;z=x;x=y;y=z;
void main(){
float a=2,b=3;
swap(a,b,float);
printf("%f %f",a,b);
}*/

#define swap(x,y,c) c z;z=x;x=y;y=z;
void main(){
int a=2,b=3;
int *p,*q;
p=&a;
q=&b;
swap(p,q,int*);
printf("%d %d",a,b);//why
printf("\n%d %d",*p,*q);
}


