#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main(){
FILE *fp;
int i=0,c=0;
char ch;
static char file[12];
//system("dir");
//system("dir *.c/w");
system("dir *.c");
printf("Enter the file name :");
scanf("%s",file);
fp=fopen(file,"r");
printf("Contents of c program file in upper case.\n");
printf("==========================================\n");
/*while((ch=fgetc(fp))!=EOF)
{
c++;
if(ch=='\n')
    i++;
printf("%c",toupper(ch));
}*/
while(!feof(fp))
{
ch=fgetc(fp);
c++;
if(ch=='\n')
    i++;
printf("%c",toupper(ch));
}
printf("Total characters %d\n",c);
printf("Total lines %d",i);
}
