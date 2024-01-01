#include<stdio.h>


void main(){
FILE *fp;
fp=fopen("q11.7.txt","r");
if(!fp){
printf("Unable to open file for reading.");
exit(1);
}

char ch[50];
fgets(ch,50,fp);
printf("%s",ch);

}
