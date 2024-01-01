#include<stdio.h>
#include<dos.h>

int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
int sum=0;
while(n!=0){
int digit=n%10;
n=n/10;
sum=sum+digit;
if(n==0 && sum>9){
printf("%d",sum);
n=sum;
sum=0;
}
}
printf("\nsum %d\n",sum);
}
