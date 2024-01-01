#include<stdio.h>
#include<windows.h>

int main(){
    int y=0;
for(int i=0;i<=8;i++){
        int z=i,x=3,count=0;
COORD c;
c.X=x;
c.Y=++y;
for(int j=3;j>=1;j--){
int digit=z%2;
if(digit==1)
    count++;
z=z/2;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("%d",digit);
c.X=--x;
}
COORD m;
m.X=10;
m.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
if(count%2==0)
    printf("%d",1);
    else
    printf("%d",0);

}
}

