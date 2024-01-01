#include<stdio.h>
#include<windows.h>

int main(){
int n,base,x=20,y=1;
COORD c;
printf("Enter no and base :");
scanf("%d %d",&n,&base);
if(base<=9){
while(n!=0){
c.X=x--;
c.Y=y;
int z=n%base;
n=n/base;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("%d",z);
}
}

}
