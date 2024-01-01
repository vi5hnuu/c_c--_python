#include<stdio.h>


void main(int argc,char *argv[],char *env[]){
int i;
for(i=1;i<argc;i++)
printf("%d",env[i]);
}
