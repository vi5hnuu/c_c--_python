#include<stdio.h>

void main(){
int std[5][2]={
{1,2},
{3,4},
{5,6},
{7,8},
{9,10}
};
int *p;
p=std[2];//address of third row;
for(int i=0;i<6;i++)//stud[i] is (first element that is 1-D array and std+i is address of 1-D array)base address of ith row and stud[i][j] is element itself
printf("%3d",(*p++));

printf("\n%u\t%u\t%u\t%u\t%u",std[0],std[9],std,std+1,*(std+1));//std+1 and *(std+1) both give same address but std[i][j]=*(*(std+i)+j) is not same as *((std+i)+j)
}//think about it
