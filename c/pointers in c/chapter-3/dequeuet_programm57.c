#include<stdio.h>

struct node{
int data;
struct node *link;
};

int main(){
struct node *front,*rear;
int item;

front=rear=NULL;

addatend(&front,&rear,11);
addatbeg(&front,&rear,10);
addatend(&front,&rear,12);
addatend(&front,&rear,13);
addatend(&front,&rear,14);
addatend(&front,&rear,15);
addatend(&front,&rear,16);
addatend(&front,&rear,17);

q_display(front);
printf("\nNo. of items in the linked list :%d\n",count(front));

printf("\nItems extracted from queue :");
item=delatbeg(&front,&rear);
printf("%3d",item);

item=delatbeg(&front,&rear);
printf("%3d",item);

item=delatbeg(&front,&rear);
printf("%3d",item);

item=delatend(&front,&rear);
printf("%3d",item);

printf("\n");
q_display(front);
printf("\nNo. of items in the linked list :%d\n",count(front));

return 0;
}

void addatend(struct node **f,struct node **r,int item){
struct node *q;

q=malloc(sizeof(struct node));
q->data=item;
q->link=NULL;

//if queue is empty
if(*f==NULL)
*f=q;
else
(*r)->link=q;
*r=q;
}

//add new element at the beginning of the queue
void addatbeg(struct node **f,struct node **r,int item){
struct node *q;
int *temp;

q=malloc(sizeof(struct node));
q->data=item;
q->link=NULL;

if(*f==NULL)
*f=*r=NULL;
else{
q->link=*f;
*r=*f;/////////////
*f=q;
}
}

//removes an element from front of the queue
delatbeg(struct node **f,struct node **r){
struct node *q;
int item;
if(*f==NULL)
printf("\nQueue is empty");
else{
q=*f;
item=q->data;
*f=q->link;
free(q);

//if on deletion queue become empty
if(*f==NULL)
(*r)=NULL;

return item;
}
}

delatend(struct node **f,struct node **r){
struct node *q,*rleft,*temp;
int item;

temp=*f;
//if queue is empty
if(*r==NULL)
printf("\nQueue is empty.");
else{
while(temp!=*r){
rleft=temp;
temp=temp->link;
}
//delete the node
q=*r;
item=q->data;
free(q);
*r=rleft;
(*r)->link=NULL;

//if on deletion queue become empty
if(*r==NULL)
*f=NULL;
return(item);
}
}

//display all elements of the queue
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



