#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

int Add(struct node **q,int num){
struct node *r,*temp=*q;

r=malloc(sizeof(struct node));
r->data=num;
//if the list is empty or if new node to be inserted at beg
if(*q==NULL || (*q)->data>num){
*q=r;
(*q)->link=temp;
}
else{
//traverse for right position
while(temp!=NULL){
if(temp->data<num && (temp->link==NULL || temp->link->data>num )){
r->link=temp->link;
temp->link=r;
return 0;
}
temp=temp->link;
}
r->link=NULL;
temp->link=r;
}
}

void display(struct node *q){
printf("\n");
while(q!=NULL){
printf("%3d",q->data);
q=q->link;
}
}

int count(struct node *q){
int c=0;
while(q!=NULL){
q=q->link;
c++;
}
return c;
}

void merge(struct node *p,struct node *q,struct node **s){
struct node *z;
z=NULL;

if(p==NULL && q==NULL){
printf("\nBoth list are empty.");
return;
}

while(p!=NULL && q!=NULL){
if(*s==NULL){
*s=malloc(sizeof(struct node));
z=*s;
}
else{
z->link=malloc(sizeof(struct node));
z=z->link;
}

if(p->data<q->data){
z->data=p->data;
p=p->link;
}
else{
if(q->data<q->data){
z->data=q->data;
q=q->link;
}
else{
if(p->data==q->data){
z->data=q->data;
q=q->link;
p=p->link;
}
}
}
}
while(p!=NULL){
z->link=malloc(sizeof(struct node));
z=z->link;
z->data=p->data;
p=p->link;
}
while(q!=NULL){
z->link=malloc(sizeof(struct node));
z=z->link;
z->data=q->data;
q=q->link;
}
z->link=NULL;
}


void main(){
struct node *first,*second,*third;
first=second=third=NULL;
Add(&first,1);
Add(&first,2);
Add(&first,3);
Add(&first,4);
Add(&first,5);
Add(&first,6);
Add(&first,7);

printf("\nFirst linked list :");
display(first);
printf("\nNo. of elements in the linked list :%d\n",count(first));

Add(&second,8);
Add(&second,9);
Add(&second,3);
Add(&second,4);
Add(&second,5);
Add(&second,6);
Add(&second,7);

printf("\nSecond linked list :");
display(first);
printf("\nNo. of elements in the linked list :%d\n",count(second));

merge(first,second,&third);

printf("\nConcated list :");
display(third);
printf("\nNo. of elements in the linked list :%d\n",count(third));

}

