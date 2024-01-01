#include<stdio.h>

struct dnode{
struct dnode *prev;
int data;
struct dnode *next;
};

int main(){
struct node *p;
p=NULL;

d_append(&p,11);
d_append(&p,21);

d_display(p);

printf("\nNo. of elements in the DLL :%d\n",d_count(p));

d_addatbeg(&p,33);
d_addatbeg(&p,55);

d_display(p);
printf("\nNo. of elements in the DLL :%d\n",d_count(p));

d_addafter(p,1,4000);
d_addafter(p,2,9000);

d_display(p);
printf("\nNo. of elements in the DLL :%d\n",d_count(p));

d_delete(&p,51);
d_delete(&p,21);

d_display(p);
printf("\nNo. of elements in the DLL :%d\n",d_count(p));
return 0;
}

d_append(struct dnode **s,int num){
struct dnode *r,*q=*s;
if(*s==NULL){
*s=malloc(sizeof(struct dnode));
(*s)->data=num;
(*s)->prev=NULL;
(*s)->next=NULL;
}
else{
while(q->next!=NULL)
q=q->next;

r=malloc(sizeof(struct dnode));
r->data=num;
r->next=NULL;
r->prev=q;
q->next=r;
}
}

d_addatbeg(struct dnode **s,int num){////////////
struct dnode *q;
q=malloc(sizeof(struct dnode));
q->data=num;
q->prev=NULL;
q->next=*s;
(*s)->prev=q;
*s=q;
}

d_addafter(struct dnode *q,int loc,int num){
struct dnode *temp;
for(int i=0;i<loc;i++){
q=q->next;

if(q==NULL){
printf("\nThere are less then %d elements in the linked list.");
return ;
}
}
q=q->prev;
temp=malloc(sizeof(struct dnode));
temp->data=num;
temp->prev=q;
temp->next=q->next;
temp->next->prev=temp;
q->next=temp;
}

d_display(struct dnode *q){
printf("\n");
while(q!=NULL){
printf("%d<-->",q->data);
q=q->next;
}
printf("-->NULL");
}

d_count(struct dnode *q){
int c=0;
while(q!=NULL){
q=q->next;
c++;
}
return c;
}

d_delete(struct dnode **s,int num){
struct dnode *q=*s;
while(q!=NULL){
if(q->data==num){
if(q==*s){
(*s)=(*s)->next;
(*s)->prev=NULL;
}
else{
//is node to be deleted is the last node
if(q->next==NULL)
q->prev->next=NULL;

else{
q->next->next=q->next;
q->next->prev=q->prev;
}
free(q);
}
return ;
}
q=q->next;
}
printf("%d not found.\n",num);
}

