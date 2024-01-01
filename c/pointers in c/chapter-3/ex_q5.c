#include<stdio.h>

struct node{
int data;
struct node *link;
};


void main(){
struct node *first,*second;
first=second=NULL;

append(&first,1);
append(&first,2);
append(&first,3);
append(&first,4);
append(&first,5);
append(&first,6);
append(&first,7);
display(first);
copy(first,&second);
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


void copy(struct node *q,struct node **s){
if(q!=NULL){
*s=malloc(sizeof(struct node));
(*s)->data=q->data;
(*s)->link=NULL;
copy(q->link,&((*s)->link));
}
}

display(struct node *q){
printf("\n");
while(q!=NULL){
printf("%5d",q->data);
q=q->link;
}
}
