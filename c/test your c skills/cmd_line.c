#include<stdio.h>


void main(int argc,char *argv[]){
//printf("%s",argv[argc-1]);
//printf("%d",argv[argc]+5);
//printf("%s",argv[1]); //cmd_line.exe 5;
/*for(int i=0;i<argc;i++)
printf("%s",argv[i]);*/

int sum=0;
/*for(int i=1;i<argc;i++)
sum=sum+atoi(argv[i]);
printf("%d",sum);*/
for(int i=0;i<argc;i++)
sum=sum+atoi(argv[i]);//atoi return zero if not able to convert to int
printf("%d",sum);
}
