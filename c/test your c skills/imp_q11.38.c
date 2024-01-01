#include<stdio.h>

void main(){
FILE *fp;
int t;
fp=fopen("Dummy.txt","w");
t=fileno(fp);
printf("%d",t);
}
