#include<stdlib.h>
#include<stdio.h>

void main(){
int k,*p,j=0,sum=0;
float avg;
puts("\nHow many subjects marks to be entered :");
scanf("%d",&k);
p=(int*)calloc(k,sizeof(int));
while(j!=k){
printf("Enter marks for subject %d :",j+1);
scanf("%d",p+j);
j++;
}
j=0;
printf("Sum of marks :");
while(j!=k){
sum=*(p+j++)+sum;
avg=sum/k;
}
free(p);
printf("%d",sum);
printf("\nAverage of marks is %.2f",avg);
}
