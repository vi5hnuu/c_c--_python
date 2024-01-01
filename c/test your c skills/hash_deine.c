#include<stdio.h>

/*#define PRINT(int) printf(""#int" =%d\n",int)*/
#define PRINT(int) printf(#int" =%d\n",int)

void main(){
int x=0,y=1,z=2;
PRINT(x);
PRINT(y);
PRINT(z);

}
