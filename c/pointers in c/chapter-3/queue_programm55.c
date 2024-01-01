#include<stdio.h>

struct node{
int data;
struct node *link;
};

void addq(struct node **,struct node **,int);
delq(struct node **,struct node **);

int main(){
struct node *front,*rear;
int item;
front=NULL;
rear=NULL;
addq(&front,&rear,11);
addq(&front,&rear,12);
addq(&front,&rear,13);
addq(&front,&rear,14);
addq(&front,&rear,15);
addq(&front,&rear,16);
addq(&front,&rear,17);

q_display(front);
printf("\nNo. of items in queue :%d\n",count(front));

printf("\nItem extracted from queue :");
item=delq(&front,&rear);
printf("%3d",item);

item=delq(&front,&rear);
printf("%3d",item);

item=delq(&front,&rear);
printf("%3d",item);

printf("\n");

q_display(front);
printf("\nNo. of items in queue :%d\n",count(front));

return 0;
}

//add new element at the end of the queue
void addq(struct node **f,struct node **r,int item){
struct node *q;
q=malloc(sizeof(struct node));
q->data=item;
q->link=NULL;

//if th eque is empty
if(*f==NULL)
*f=q;
else
(*r)->link=q;
(*r)=q;
}

//remove an element form front of the queue
delq(struct node **f,struct node **r){
struct node *q;
int item;

if(*f==NULL)
printf("\nStack is Empty.");
else{
q=*f;
item=q->data;
*f=q->link;
free(q);

//if on deletetion of this element queue becomes empty
if(*f==NULL)
*r=NULL;
return item;
}
}

//display all items of the queue
q_display(struct node *q){
printf("front->");
while(q!=NULL){
if(q->link==NULL)
printf("<-rear");

printf("%3d",q->data);
q=q->link;
}
printf("\n");
}

count(struct node *q){
int c=0;
while(q!=NULL){
q=q->link;
c++;
}
return c;
}










