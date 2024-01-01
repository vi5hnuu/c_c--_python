#include<stdio.h>

int main(){
int A[4],B[4],C[4];
printf("Enter bits from msb to lsb");
for(int i=0;i<4;i++){
printf("\nBit in A :");
scanf("%d",&A[i]);
printf("\nBit in B :");
scanf("%d",&B[i]);
if(A[i]==B[i] && A[i]==1)
C[i]=1;
else
C[i]=0;
}
printf("And operation result :");
for(int i=0;i<4;i++){
printf("%d",C[i]);
}
}


//modified and_operation_1.c
