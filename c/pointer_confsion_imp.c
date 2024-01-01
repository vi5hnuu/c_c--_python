#include<stdio.h>

void main(){
int a[5]={1,2,3,4,5};
int *p[5],i;
for(int i=0;i<5;i++)
p[i]=a+i;
for(int i=0;i<5;i++){
printf("\n\t%d\t%d at location",**(p+i),*(*p+i));//a[][]-->*p=a[](address)-->*p[5]={{1}{2}{3}{4}{5}}
printf("\t%u at location",*(p+i));
printf("\t %u or %d",p+i,&p[i]);}//a[][]-->a is address of address -->a[0]->first bracked(int that first ele address),
//&p[i]=&(*(p+i)-->address of let say '1')-->addres where ia is pointed.
}
