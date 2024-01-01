#include<stdio.h>
#include<conio.h>
#include<process.h>

void main(){
FILE *fp;
char c;
fp=fopen("data.txt","w");
if(!fp){
printf("Unable to open file");
exit(0);
}
printf("Write data and to stop press '.':");
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
