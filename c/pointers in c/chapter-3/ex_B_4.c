#include<stdio.h>

struct a{
char city[3][20];
char state[3][20];
};

void main(){
struct a arr={
{
"nagpur",
"mumbai",
"bangalore"
},
{
"maharashtra",
"utterpradesh",
"karnataka"
}
};

printf("%s %s\n",arr.city,arr.state);
printf("%s %s\n",arr.city+2,arr.state+2);
}
