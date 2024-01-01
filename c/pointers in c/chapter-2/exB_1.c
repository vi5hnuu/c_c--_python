#include<stdio.h>

void main(){
char str[]="oddlengthstring";
char *ptr1=str,*ptr2=str+strlen(str)-1;
int i;
for(i=0;ptr1!=ptr2;i++){
++ptr1;
--ptr2;
}
printf("%d",i);
}
