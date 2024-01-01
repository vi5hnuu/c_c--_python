#include<stdio.h>
#include<math.h>

int main(){
int count;
for(int i=1;i<=500;i++){
if(floor(sqrt(i))==sqrt(i)){
count++;
printf(" %d ",i);
}
}
}
