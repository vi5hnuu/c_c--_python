#include<stdio.h>


void main(){
int a[10][10],b[10][10],c[10][10]={0,0};
int row1,col1;
printf("Enter row1 and col1 :");
scanf("%d %d",&row1,&col1);
int row2=col1,col2;
printf("\nEnter col2 :");
scanf("%d",&col2);

for(int i=0;i<row1;i++){
printf("Enter entry for matrix A row %d\n",i);
for(int j=0;j<col1;j++){
scanf("%d",&a[i][j]);
}
}
printf("\n\n");
for(int i=0;i<row2;i++){
printf("Enter entry for matrix B row %d\n",i);
for(int j=0;j<col2;j++){
scanf("%d",&b[i][j]);
}
}

for(int i=0;i<row1;i++){
for(int j=0;j<col2;j++){
        for(int k=0;k<row2;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}

printf("Array A :\n");
for(int i=0;i<row1;i++){
for(int j=0;j<col1;j++)
printf("%3d",a[i][j]);
printf("\n");
}

printf("Array B :\n");
for(int i=0;i<row2;i++){
for(int j=0;j<col2;j++)
printf("%3d",b[i][j]);
printf("\n");
}

printf("Array c :\n");
for(int i=0;i<row1;i++){
for(int j=0;j<col2;j++)
printf("%3d",c[i][j]);
printf("\n");
}





}
