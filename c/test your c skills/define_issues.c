#include<stdio.h>
#define ass(x) x;
void main(){
int a=5,b;
b=ass(a);// become  b=ass(a)==> b=x;; last semicolan is not evaluted;
//if(a>ass(b)) ==>> if(a>x;) show error so dont use semicolan in define stmts;
printf("%d",b);
}
