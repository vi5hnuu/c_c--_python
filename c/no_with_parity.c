#include<stdio.h>

int main(){
int bit[5],count=0,j;

printf("Enter four bits with space after each bit :");
for(j=0;j<4;j++){
scanf("%d",&bit[j]);
if(bit[j]==1)
count++;
else if(bit[j]<0 || bit[j]>1){
        printf("\nEnter this bit again :");
j--;
continue;
}
}
if(count%2==0)
bit[j]=0;
else
bit[j]=1;
printf("No. with parity :");
for(int i=0;i<=4;i++)
printf("%d",bit[i]);
}
