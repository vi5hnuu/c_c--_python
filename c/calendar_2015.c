#include<stdio.h>

int main(){
int month,h,i=1,start,no_days,b=1;
for(int m=1;m<=12;m++){
printf("\n\n\nEnter month number of the year :");
scanf("%d",&month);
switch(month){
case 1:start=5; no_days=31; break;
case 2:start=1; no_days=28; break;
case 3:start=1; no_days=31; break;
case 4:start=4; no_days=30; break;
case 5:start=6; no_days=31; break;
case 6:start=2; no_days=30; break;
case 7:start=4; no_days=31; break;
case 8:start=7; no_days=31; break;
case 9:start=3; no_days=30; break;
case 10:start=5; no_days=31; break;
case 11:start=1; no_days=30; break;
case 12:start=3; no_days=31; break;
default:printf("\nInvalid choice");
}
printf("\n\n\n");
printf("\t\t\tmonth-%d-2015\n\n",month);
printf("SUN\tMON\tTUE\tWED\tTHR\tFRI\tSAT\n");

switch(start){
case 1:printf("%d",i); break;
case 2:printf("\t%d",i); break;
case 3:printf("\t\t%d",i); break;
case 4:printf("\t\t\t%d",i); break;
case 5:printf("\t\t\t\t%d",i); break;
case 6:printf("\t\t\t\t\t%d",i); break;
case 7:printf("\t\t\t\t\t\t%d",i); break;
}
h=8-start;
for(i=2;i<=h;i++)
printf("\t%d",i);
printf("\n");

for(i=h+1;i<=no_days;i++){
if(b==8){
b=1;
printf("\n");
}
printf("%d\t",i);
b++;
}
}
}
