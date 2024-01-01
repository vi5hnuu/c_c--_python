#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void main(){
char file[20],text[50];
int i=0;
printf("Enter file name :");
scanf("%s",file);
FILE *fp;
fp=fopen(file,"r");
if(!fp){
printf("File not found.");
exit(0);
}
else{
if(fgets(text,50,fp)!=NULL)
while(text[i]!='\0'){
putchar(text[i]);
i++;
}
}
}
