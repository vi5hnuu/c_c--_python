#include<stdio.h>

typedef struct error{int warning,err,exception}ERROR;

void main(){
ERROR e;
e.err=1;
printf("%d",e.err);
}
