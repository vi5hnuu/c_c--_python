#include<stdio.h>

/*typedef struct{
int a;
float b;
} ss;
*/
typedef struct s{
int a;
float b;
} ss;

void main(){
ss obj;
obj.a=5;
obj.b=5.5;
printf("%d %.2f",obj.a,obj.b);
}
