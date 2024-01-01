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

append(&second,1);
append(&second,2);
append(&second,3);

if(compare(first,second))
printf("Both linked list are Equal.");
else
printf("Both linked list are Unequal.");
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

int compare(struct node *q,struct node *r){
static int flag;
if(q==NULL && r==NULL)
flag=1;
else{
if(q==NULL || r==NULL)
flag=0;
if(q->data!=r->data)
flag=0;
else
compare(q->link,r->link);
}
return flag;
}
