#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>


void main(){
FILE *f[3];
int x[3];
char ch;
char name[3][15];
system("dir *.txt");
for(int i=0;i<3;i++){
printf("\nEnter file %d name :",i+1);
scanf("%s",name[i]);
f[i]=fopen(strcat(name[i],".txt"),"r");
if(!f[i]){
printf("Error opening %s file",name[i]);
printf("\nExiting.");
exit(1);
}
fflush(stdin);
while(!feof(f[i])){
ch=fgetc(f[i]);
++x[i];
}
printf("size of file %d is %d",i+1,x[i]);
}

printf("\nlargest size is %d ",x[0]>x[1]?x[0]>x[2]?x[0]:x[2]:x[1]>x[2]?x[1]:x[2]);
printf("\n%d file closed.",_fcloseall());
}
