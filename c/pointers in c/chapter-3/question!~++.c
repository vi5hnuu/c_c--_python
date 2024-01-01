#include<stdio.h>

void main(){
char val=250;
int ans;/*
ans=!val;
printf("%d\n",ans);
ans=~val;
printf("%d\n",ans);
ans=++val;//-128 0 127
printf("%d\n",ans);*/
ans=val +!val+ ~val + ++val;//val=11111010
printf("%d\n",ans);
/*
char z=129;
printf("%d\n",z);*/
}
