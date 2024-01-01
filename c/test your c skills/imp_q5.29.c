#include<stdio.h>

void fun(char**);

void main(){
char *argv[]={"ab","cd","ef","gh","ij"};
fun(argv);
}

void fun(char **p){
char *t;
t=(p+=sizeof(int))[-1];//p===address of base address a("ab")  p+=4===ij==>address of adress i("ij")-int==gh
printf("%s",t);
}
