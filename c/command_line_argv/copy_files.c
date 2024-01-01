#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main(int argc,char *argv[]){
FILE *source,*target;
char file[20];
int c=0;
source=fopen(argv[1],"r");
if(!source){
printf("Error opening source file.");
exit(1);
}
target=fopen(argv[2],"w");
if(!target){
printf("Error opening target file.");
exit(1);
}

while(!feof(source)){
fputc(fgetc(source),target);
c++;
}
printf("%d bytes copied from source file to taget file.\n",c);
c=_fcloseall();
printf("%d file closed",c);
}
