#include<stdio.h>

/*
void main(){
char src[20],dest[50],g[50];
printf("Ente string 1 :");
gets(src);
memcpy(dest,src,20);
printf("%s",dest);
}*/

void main(){
char src[20],dest[50],*g,*m,c='z';
printf("Ente string 1 :");
gets(src);
m=memccpy(dest,src,c,10);
g=strchr(src,c);
printf("%s\t%s\n",dest,m);
//printf("%s",g);
}
