#include<stdio.h>
#include<windows.h>
#include<dos.h>

int main(){
int h,m,s,x=8,y=8,count=1;
for(h=1;h<=12;h++)
for(m=1;m<=59;m++)
for(s=1;s<=59;s++){
        COORD c;
        c.X=x;
        c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("hh:mm:ss");
c.X=++x;
c.Y=y+1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("%d:%d:%d",h,m,s);
sleep(1);
system("cls");

if(count==10){
    x=8;
    y=8;
    count=1;
    }
count++;
}
return 0;
}
