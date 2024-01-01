#include<stdio.h>

struct node{
int data;
struct node *link;
};

void main(){
struct node *p;
p=NULL;
append(&p,1);
append(&p,2);
append(&p,3);
append(&p,4);
append(&p,5);

printf("\nLength of the linked list :%d",length(p));
}

void append(struct node **q,int num){
struct node *temp;
temp=*q;

if(*q==NULL){
*q=malloc(sizeof(struct node));
temp=*q;
}
else{
while(temp->link!=NULL)
temp=temp->link;

temp->link=malloc(sizeof(struct node));
temp=temp->link;
}
temp->data=num;
temp->link=NULL;
}

length(struct node *q){
//static int i;
int i=0;
if(q==NULL)
return 0;
else{
i=1+length(q->link);
return i;
}
}
