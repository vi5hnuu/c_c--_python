#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>


void main(){
FILE *fp;
char c;
fp=fopen("new.txt","w");
if(!fp){
printf("\nCannot open file.");
exit(0);
}
while(!feof(fp)){
c=fgetc(fp);
if(ferror(fp)){
printf("Can't read the file.");
fclose(fp);
exit(1);
}
printf("%c",c);
}
fclose(fp);
}
