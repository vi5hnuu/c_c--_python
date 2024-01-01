#include<stdio.h>

struct account{
int no;
char acc_number[15];
float bal;
};

void main(){
struct account a1,a2,a3;
printf("Enter account nos. ,Names, and balances.\n");
scanf("%d %s %f",&a1.no,a1.acc_number,&a1.bal);
scanf("%d %s %f",&a2.no,a2.acc_number,&a2.bal);
scanf("%d %s %f",&a3.no,a3.acc_number,&a3.bal);

printf("%d %s %.2f\n",a1.no,a1.acc_number,a1.bal);
printf("%d %s %.2f\n",a2.no,a2.acc_number,a2.bal);
printf("%d %s %.2f\n",a3.no,a3.acc_number,a3.bal);

}
