#include<stdio.h>

struct node{
int data;
struct node *link;
};

void main(){
struct node *top;
int item;

top=NULL;

push(&top,11);
push(&top,12);
push(&top,13);
push(&top,14);
push(&top,15);
push(&top,16);
push(&top,17);

stack_display(top);
printf("\nNo. of items in stack :%d\n",count(top));

printf("\nItems Extracted from stack :");
item=pop(&top);
printf("%3d",item);

item=pop(&top);
printf("%3d",item);

item=pop(&top);
printf("%3d",item);

stack_display(top);
printf("\nNo. of items in stack :%d\n",count(top));
}

push(struct node **s,int item){
struct node *q;
q=malloc(sizeof(struct node));
q->data=item;
q->link=*s;
*s=q;
}

pop(struct node **s){
int item;
struct node *q;

if(*s==NULL)
printf("\nStack is Empty!");
else{
q=*s;
item=q->data;
*s=q->link;
free(q);
return(item);
}

}

stack_display(struct node *q){
printf("\nItems :");

while(q!=NULL){
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
