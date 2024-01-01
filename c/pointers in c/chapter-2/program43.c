#include<stdio.h>


void main(){
const char *fun();
const char *p;
p=fun();
//*p='a';error
printf("%s",p);
}

const char *fun(){
return "vishnu";
}
