#include<stdio.h>
#include<conio.h>
#include<process.h>
//data file alread exist....using append
void main(){
FILE *fp;
char c;
printf("\nContent read");
fp=fopen("data.txt","r");
while(!feof(fp)){
printf("%c",getc(fp));
}

fp=fopen("data.txt","a");
if(!fp){
printf("Unable to open file for appending.");
exit(0);
}
printf("\nWrite data and to stop press '.':");
while(c!='.'){
c=getche();
fputc(c,fp);
}
fclose(fp);
printf("\nContent read");
fp=fopen("data.txt","r");
while(!feof(fp)){
printf("%c",getc(fp));
}

}
