#include<stdio.h>

struct node{
int data;
struct node *link;
};

void main(){
struct node *p;
p=NULL;

addatbeg(&p,1);
addatbeg(&p,2);
addatbeg(&p,3);
addatbeg(&p,4);
addatbeg(&p,5);
addatbeg(&p,6);

display(p);
printf("\nNo. of elements in the linked list :%d\n",count(p));

reverse(&p);
display(p);
printf("\nNo. of elements in the linked list :%d\n",count(p));

}

//adds a new noe at he beginning of a linked list
addatbeg(struct node **q,int num){//why **q think abt it.
struct node *temp;
temp=malloc(sizeof(struct node));
temp->data=num;
temp->link=*q;
*q=temp;
}

reverse(struct node **x){
struct node *q,*r,*s;
q=*x;
r=NULL;

while(q!=NULL){
s=r;
r=q;
q=q->link;
r->link=s;
}
*x=r;
}

display(struct node *q){
printf("\n");
while(q!=NULL){
printf("%3d",q->data);
q=q->link;
}
}


count(struct node *q){
int c=0;
while(q!=NULL){
q=q->link;
c++;
}
return c;
}
