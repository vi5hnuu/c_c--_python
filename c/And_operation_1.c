#include<stdio.h>
#include<dos.h>
int main(){
char A[4],B[4],C[4];
system("cls");
printf("\nBit in A :");
gets(A);
printf("\nBit in B :");
gets(B);
for(int i=0;i<4;i++)
    printf("%c",A[i]);
/*for(int i=0;i<4;i++){
if(A[i]==B[i] && A[i]!='0')
C[i]='1';
else
C[i]='0';
}
printf("And operation result :");
for(int i=0;i<4;i++){
printf("%c",C[i]);
}*/
}


//modified and_operation_1_int.c
