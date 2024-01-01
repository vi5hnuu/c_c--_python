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

printf("\nFirst list :");
display(first);

printf("\nNo. of elements in the first linked list :%d",count(first));
append(&second,5);
append(&second,6);
append(&second,7);
append(&second,8);
printf("\nsecond list :");
display(second);

printf("\nNo. of elements in the first linked list :%d",count(second));

printf("\nThe result obtained after concationation.\n");
concat(&first,&second);
printf("\nConcated list :");
display(first);
printf("\nNo. of elements in the first linked list :%d",count(first));

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

void concat(struct node **p,struct node **q){
struct node *temp;

if(*p==NULL)
*p=*q;
else{
if(*q!=NULL){
temp=*p;
while(temp->link!=NULL)
temp=temp->link;
temp->link=*q;
}
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
