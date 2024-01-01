#include<stdio.h>

float fact(int m){
int fact=1;
while(m!=0){
fact=fact*m;
m--;
}
return fact;
}


int main(){
int x,n;
printf("Enter the number and the range :");
scanf("%d %d",&x,&n);
float sum=x;
for(int i=2;i<=n;i+=2){
sum=sum+(pow(x,i)/fact(i));
}
printf("sum %.2f",sum);
}
