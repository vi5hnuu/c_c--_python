#include<stdio.h>
#include<windows.h>

int main(){
char ch[22];
gets(ch);
int i=0;
int x=0,y=1;
COORD m;
for(i=0;i<22;i++){
m.X=x;
m.Y=y;
x++;
y++;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
printf("%c",ch[i]);
}
}
