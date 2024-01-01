#include<stdio.h>

struct node{
int data;
struct node *link;
};

void main(){
struct node *front,*rear;

front=rear=NULL;

addcirq(&front,&rear,10);
addcirq(&front,&rear,11);
addcirq(&front,&rear,12);
addcirq(&front,&rear,13);
addcirq(&front,&rear,14);
addcirq(&front,&rear,15);

cirq_display(front);

delcirq(&front,&rear);
delcirq(&front,&rear);
delcirq(&front,&rear);

printf("\nAfter deletion :");
cirq_display(front);
}

addcirq(struct node **f,struct node **r,int item){
struct node *q;
q=malloc(sizeof(struct node));
q->data=item;

if(*f==NULL)
*f=q;
else
(*r)->link=q;

*r=q;
(*r)->link=*f;
}

delcirq(struct node **f,struct node **r){
struct node *q;
int item;
if(*f==NULL)
printf("Queue is empty.");
else{
if(*f==*r){
item=(*f)->data;
free(*f);
*f=NULL;*r=NULL;
}
else{
q=*f;
item=q->data;
*f=(*f)->link;
(*r)->link=*f;
free(q);
}
return item;
}
}

cirq_display(struct node *f){
struct node *q=f,*p=NULL;

printf("front->\n");
while(q!=p){
printf("%5d",q->data);
q=q->link;
p=f;
}
printf("-->...front");
}
