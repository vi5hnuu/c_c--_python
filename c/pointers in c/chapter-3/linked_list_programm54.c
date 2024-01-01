#include<stdio.h>

struct node{
int data;
struct node *link;
};

void main(){
struct node *p;
p=NULL;

add(&p,5);
add(&p,1);
add(&p,6);
add(&p,4);
add(&p,7);

display(p);
printf("\nNo. of Elements in the linked list :%d\n",count(p));

delete(&p,7);
delete(&p,4);
delete(&p,5);
delete(&p,9);

display(p);
printf("\nNo. of Elements in the linked list :%d\n",count(p));
}

//add  node to an ascending order linked list
add(struct node **q,int num){
struct node *temp,*r;
temp=*q;
r=malloc(sizeof(struct node));
r->data=num;
if(*q==NULL || (*q)->data>num){
*q=r;
(*q)->link=temp;
}
else{
//traversing the linked list to search the position to insert the node.
while(temp!=NULL){
if(temp->data<=num &&((temp->link==NULL || temp->link->data>num ))){
r->link=temp->link;
temp->link=r;
return 0;
}
temp=temp->link;
}
}
}

//display the ocntent of the linked list
display(struct node *q){
printf("\n");
while(q!=NULL){
printf("%10d",q->data);
q=q->link;
}
}

//count the number of nodes present in the linked list
count(struct node *q){
int c=0;
while(q!=NULL){
q=q->link;
c++;
}
return c;
}

//delete the specified node from the linked list
delete(struct node **q,int num){
struct node *old,*temp;
temp=*q;

while(temp!=NULL){
if(temp->data==num){
//if the node is first node
if(temp==*q){
*q=temp->link;
free(temp);
return 0;
}
//delete intermediate node
else{
old->link=temp->link;
free(temp);
return 0;
}
}
else{
old=temp;
temp=temp->link;
}
}
printf("Element %d not found\n",num);
}
