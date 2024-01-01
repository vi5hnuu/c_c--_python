#include<stdio.h>

void main(){
char a[]="\0";
if(printf("%s",a))//printf returns the actual length
printf("The string is not empty");
else
printf("The string is empty");
}
