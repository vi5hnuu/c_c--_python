#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>


void main(){
FILE *fp;
char next='y';
char name[25];
int marks;
float p;
fp=fopen("marks.dat","r");
if(fp==NULL){
puts("Cannot open file");
exit(1);
}

while(tolower(next)=='y'){
printf("Enter name,marks,percentage :");
scanf("%s %d %f",name,&marks,&p);
p=marks/7;
fprintf(fp,"%s %d %d",name,marks,p);
if(ferror(fp)){
printf("\nUnable to write data");
printf("\nFile opening mode is incorrect.");
fclose(fp);
exit(1);
}
printf("Continue(y/n)");
fflush(stdin);
next=getche();
}
fclose(fp);
}
