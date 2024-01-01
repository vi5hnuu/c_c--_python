#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main(){
FILE *source,*target;
char file[20];
int c=0;
system("dir *.c");
printf("Enter source file name :");
scanf("%s",file);
source=fopen(file,"r");
if(!source){
printf("Error opening source file.");
exit(1);
}
printf("Enter taret file name :");
scanf("%s",file);
target=fopen(file,"w");
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
