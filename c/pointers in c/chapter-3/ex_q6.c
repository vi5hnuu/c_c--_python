#include<stdio.h>

struct node{
int data;
struct node *link;
};


void main(){
struct node *p;
p=NULL;
addatend(&p,1);
addatend(&p,2);
addatend(&p,3);
addatend(&p,4);
addatend(&p,5);
addatend(&p,6);
addatend(&p,10);

display(p);
}

addatend(struct node **s, int num){
if(*s==NULL){
*s=malloc(sizeof(struct node));
(*s)->data=num;
(*s)->link=NULL;
}
else{
addatend(&((*s)->link),num);
}
}

display(struct node *q){
printf("\n");
while(q!=NULL){
printf("%5d",q->data);
q=q->link;
}
}

