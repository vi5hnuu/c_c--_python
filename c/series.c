#include<stdio.h>

float fact(int m){
float fact=1;
while(m!=0){
fact=fact*m;
m--;
}
return fact;
}

int main(){
float sum=1;
int n;
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i%2==0)
sum=sum+i/fact(i);
else
sum=sum-i/fact(i);
}
printf("%f",sum);
}
