#include<stdio.h>

int main(){
int A[4],B[4],C[4];
printf("\nBit in A :");
for(int i=0;i<4;i++)
    scanf("%1d",&A[i]);
    printf("\nBit in B :");
for(int i=0;i<4;i++)
    scanf("%1d",&B[i]);

for(int i=0;i<4;i++){
if((A[i] && B[i]) || (!A[i] && !B[i]) )
C[i]=0;
else
C[i]=1;
}
printf("XOR operation result :");
for(int i=0;i<4;i++){
printf("%d",C[i]);
}
}


//modified and_operation_1_int.c
