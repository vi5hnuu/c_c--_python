#include<stdio.h>
#include<conio.h>
#include<process.h>

void main(){
FILE *fp;
char c=' ';
fp=fopen("data.txt","r+");
if(!fp){
printf("Cannot open the file");
exit(0);
}
printf("\nContent read.\n");
while(!feof(fp)){
printf("%c",getc(fp));
}
printf("Write data  and to stop press '.' ");
while(c!='.'){
c=getche();
fputc(c,fp);
}
rewind(fp);
printf("\nContent read.\n");
while(!feof(fp)){
printf("%c",getc(fp));
}


}
