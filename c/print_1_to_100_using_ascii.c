#include<stdio.h>

int main(){
int k=-9,i,j;
printf("Table of  1 to 100 using ascii value.\n");
for( i=48;i<=57;i++,k++){
for( j=49;j<=57;j++)
printf(" %c%c ",i,j);
if(k!=0)
printf(" %c%c ",i+1,48);
if(k==0)
printf(" %d%d%d",k+1,k,k);
printf("\n\n");}

}
