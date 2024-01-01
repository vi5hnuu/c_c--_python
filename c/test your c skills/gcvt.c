#include<stdio.h>

void main(){
char str[10];
gcvt(125.256,2,str);
printf("%s",str);
gcvt(125.256,10,str); //?
printf("%s",str);
}
