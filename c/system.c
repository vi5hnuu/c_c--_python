#include<stdio.h>
#include<dos.h>

int main(){
int x=system("dir");
if(x==0)
printf("success");
else
    printf("fail");
return 0;
}
