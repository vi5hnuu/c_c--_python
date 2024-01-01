#include<stdio.h>


void main(){
FILE *fp;
char str[20],ch;
int i=0;
system("dir *.c/w");
char source[30];
printf("Enter source file name :");
scanf("%s",source);
fp=fopen(source,"r");
while(!feof(fp)){
        ch=fgetc(fp);
if(ch=='\n' || ch==' '){
str[i]='\0';
strrev(str);
printf("%s",str);
i=0;
}
else
str[++i]=ch;
}
fclose(fp);
}
