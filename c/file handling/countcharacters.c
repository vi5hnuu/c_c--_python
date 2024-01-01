#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void main(){
FILE *fp;
int i=0,x,y,c=0,sb=0,b=0;
fp=fopen("filepractice.c","r");
if(!fp){
printf("Cannot open file.");
exit(0);
}

while((x=fgetc(fp))!=EOF){
switch(x){
case ';':c++; break;
case '{':sb++; break;
case '(':b++; break;
case '#':i++; break;
}
}
fclose(fp);
printf("\nSummary.\n");
printf("%d\t%d\n%d\t%d",c,sb,b,i);
}
