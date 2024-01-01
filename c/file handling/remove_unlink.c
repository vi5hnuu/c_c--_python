#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main(){
FILE *fp;
char file[15];
system("dir *.txt");
printf("Enter the file name :");
scanf("%s",file);
fp=fopen(file,"r");
if(!fp){
printf("Cannot open file.");
exit(1);
}
else{
//remove(file);
unlink(file);
printf("File deleted permanently.");
}
}
