#include<stdio.h>

enum color{red,green,yellow};
typedef enum color mycolor;
void main(){
mycolor m=red;
printf("%d",m);
}
