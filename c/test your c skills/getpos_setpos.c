#include<stdio.h>


void main(){
FILE *fp;
char ch;
fp=fopen("q19.9.c","r");
fsetpos(12,fp);
while(!feof(fp)){
        ch=fgetc(fp);

printf("%c",ch);

//printf("%c",fgetc(fp));
}
}
