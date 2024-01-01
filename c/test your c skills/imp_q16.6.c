#include<stdio.h>
#include<stdlib.h>

#define MAXROW 3
#define MAXCOL 4

void main(){
int **p;
p=(int**)malloc(MAXROW*sizeof(int*));
for(int i=0;i<MAXROW;i++)
p[i]=(int*)malloc(MAXCOL*sizeof(int));
for(int i=0;i<MAXROW;i++){
for(int j=0;j<MAXCOL;j++){
p[i][j]=i;
printf("%d",p[i][j]);
}
printf("\n");
}

}
