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
int n,x,count=0;
float sum=0;
printf("Enter the no and range :");
scanf("%d %d",&x,&n);
for(int i=1;i<=n;i+=2){
if(count%2==0)
sum=sum+pow(x,i)/fact(i);
else
sum=sum-pow(x,i)/fact(i);
count++;
}
printf("%f",sum);
}
