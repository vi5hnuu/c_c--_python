#include<stdio.h>
#include<stdarg.h>

void main(){
int max=findmax(5,23,15,1,92,50);
printf("\n%d",max);
max=findmax(5,7);
printf("\n%d",max);
}

findmax(int tot_num){
int max,count,num;
va_list ptr;
va_start(ptr,tot_num);
max=va_arg(ptr,int);
for(count=1;count<tot_num;count++){
num=va_arg(ptr,int);
if(num>max)
max=num;
}
return max;
}
