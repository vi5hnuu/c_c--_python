/*#include<stdio.h>
int triple(int);
void main(){
int a=triple(10);
printf("%d",a);
}

int triple(int a){
int ddouble(int c){
return c*2;
}
int z=ddouble(a)+a;
return z;
}*/


#include<stdio.h>
int triple(int);
void main(){
int a=triple(10);
printf("%d",a);
}
int ddouble(int c){
return c*2;
}
int triple(int a){

int z=ddouble(a)+a;
return z;
}


