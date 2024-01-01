#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
int j,*p;
p=(int*)malloc(2*sizeof(int));
for(j=0;j<2;j++){
printf("Enter number %d",j+1);
scanf("%d",p+j);
}
printf("\nNumbers are :");
for(j=0;j<2;j++){
printf("%d\n",*(p+j));
}
printf("\nNumbers after reallocation.\n");
p=(int*)realloc(p,sizeof(int)*3);
for(j=0;j<3;j++){
printf("Enter number %d",j+1);
scanf("%d",p+j);
}
printf("\nNumbers are :");
for(j=0;j<3;j++){
printtf("%d\n",*(p+j));
}
free(p);
}
