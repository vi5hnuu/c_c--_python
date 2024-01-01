#include<stdio.h>

struct node{
int data;
struct node *link;
};

void main(){
struct node *p;
p=NULL;
printf("\nNo. of elements in the Linked list=%d\n",count(p));
append(&p,1);
append(&p,2);
append(&p,3);
append(&p,4);
append(&p,17);

display(p);

addatbeg(&p,999);
addatbeg(&p,888);
addatbeg(&p,777);

display(p);

/*addafter(p,7,0);
addafter(p,2,1);
addafter(p,1,99);*/
addafter(&p,7,0);
addafter(&p,2,1);
addafter(&p,1,99);

display(p);
printf("\nNo. of elements in the linked list=%d\n",count(p));

delete(&p,888);
delete(&p,1);
delete(&p,10);

display(p);
printf("\nNo. of elements in the linked list=%d\n",count(p));
}

//add a node at the end of a linked list

append(struct node **q,int num){
struct node *temp,*r;

if(*q==NULL){
temp=malloc(sizeof(struct node));
temp->data=num;
temp->link=NULL;
*q=temp;
}
else
{
temp=*q;
while(temp->link!=NULL)
temp=temp->link;

r=malloc(sizeof(struct node));
r->data=num;
r->link=NULL;
temp->link=r;
}
}

//add a new node at the beginning of the list

addatbeg(struct node **q,int num){
struct node *temp;
temp=malloc(sizeof(struct node));
temp->data=num;
temp->link=*q;
*q=temp;
}

//add a new node after a specified number of nodes
/*addafter(struct node *q,int loc,int num){
struct node *temp,*r;
int i;
temp=q;
for(i=0;i<loc;i++){
temp=temp->link;
if(temp==NULL){
printf("\nThere are less then %d elements in the linked list.\n",loc);
return 0;
}
}
//insert a node
r=malloc(sizeof(struct node));
r->data=num;
r->link=temp->link;
temp->link=r;
}*/

addafter(struct node **q,int loc,int num){
struct node *temp,*r;
int i;
temp=*q;
for(i=0;i<loc;i++){
temp=temp->link;
if(temp==NULL){
printf("\nThere are less then %d elements in the linked list.\n",loc);
return 0;
}
}
//insert a node
r=malloc(sizeof(struct node));
r->data=num;
r->link=temp->link;
temp->link=r;
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
