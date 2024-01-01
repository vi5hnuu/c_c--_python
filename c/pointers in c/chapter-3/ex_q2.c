#include<stdio.h>

struct node{
int data;
struct node *link;
};

struct node* erase(struct node *q);


void main(){
struct node *first;
first=NULL;
append(&first,0);
append(&first,1);
append(&first,2);
append(&first,3);
append(&first,4);
append(&first,5);
append(&first,6);

display(first);
printf("\nNo. of elements in the linked list :%d",count(first));

first=erase(first);
printf("\nNo. of elements of the linked list after erasing :%d",count(first));

}

void append(struct node **q,int num){
struct node *temp;
temp=*q;

if(temp==NULL){
//*q=malloc(sizeof(struct node));
temp=malloc(sizeof(struct node));
//temp=*q;
*q=temp;
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

display(struct node *q){
printf("\n");
while(q!=NULL){
printf("%5d",q->data);
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

struct node* erase(struct node *q){
struct node *temp;
while(q!=NULL){
temp=q;
q=q->link;
free(temp);
}
return NULL;
}
