//sizeof(*p) will be MAXCOL*sizeof(int). So totally MAXROW*MAXCOL*sizeof(int) number of bytes are alloctaed.


#include<stdio.h>
#include<stdlib.h>

#define MAXROW 3
#define MAXCOL 4

void main(){
int (*p)[MAXCOL];//*p[0],*p[1],*[2],*p[4]
p=(int(*)[MAXCOL])malloc(MAXROW*sizeof(*p));
}
