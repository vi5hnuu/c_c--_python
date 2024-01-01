#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void main(){
FILE *fp;
int v;
fp=fopen("num.txt","w");
if(!fp){
printf("Can't open file.");
exit(0);
}
else{
printf("Enter the number :");
while(1){
scanf("%d",&v);
if(v==0){
fclose(fp);
break;
}
putw(v,fp);
}
}
printf("\nReading content.\n");
fp=fopen("num.txt","r");
/*while(!feof(fp)){*/
while((v=getw(fp))!=EOF){
printf("%d",v);
}
}
