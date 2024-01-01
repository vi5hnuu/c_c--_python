#include<stdio.h>
#include<windows.h>

int main(){
int n,y=1;
COORD c;
printf("Enter the no to generate pyramid:");
scanf("%d",&n);
int x=n;
for(int i=0;i<=n;i++){
c.X=x--;
c.Y=y++;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
for(int j=i;j>=-i;j--){
printf("%d",abs(j));
}
printf("\n");
}

}
