#include<stdio.h>


void main(){
int n,avg,*p,sum=0;

printf("Enter the number of students :");
scanf("%d",&n);

p=(int *)malloc(n*sizeof(int));
if(p==NULL){
printf("Failed to allocate memory.");
exit(1);
}

for(int i=0;i<n;i++){
printf("\nEnter marks for student %d :",i+1);
scanf("%d",(p+i));
}

printf("\nMarks of students are :");
for(int i=0;i<n;i++){
printf("%4d",*(p+i));
sum=sum+*(p+i);
}

printf("\nAverage is :%.2f",(float)sum/n);
}
