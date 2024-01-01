#include<stdio.h>

void main(){
//char *str="vishnu 12.5 vishnu";
const char *str="12.5% vishnu";
char *stp;
double d;
d=strtod(str,&stp);
printf("%.2f",d);
printf("\n%s",stp);
}
