#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>


void main(){
FILE *fp;
char c,file[]="file.txt";
fp=fopen("new.txt","w");
if(!fp){
printf("\nCannot open file.");
exit(0);
}
while(!feof(fp)){
c=fgetc(fp);
if(ferror(fp)){
perror(file);
fclose(fp);
exit(1);
}
printf("%c",c);
}
fclose(fp);
}
