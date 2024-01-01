#include<stdio.h>

struct polynode{
float coeff;
int exp;
struct polynode *link;
};

void poly_append(struct polynode **,float,int);
void poly_multiply(struct polynode*,struct polynode*,struct polynode **);
padd(float,int,struct polynode**);

void main(){
struct polynode *first,*second,*mult;
int i=1;
first=second=mult=NULL;

poly_append(&first,3,5);
poly_append(&first,2,4);
poly_append(&first,3,4);
printf("\n\n");
display_poly(first);
poly_append(&second,1,6);
poly_append(&second,2,5);
poly_append(&second,3,4);
printf("\n\n");
display_poly(second);
printf("\n");
while(i++<79)
printf("-");

poly_multiply(first,second,&mult);
printf("\n");
display_poly(mult);
}


void poly_append(struct polynode **q,float x,int y){
struct polynode *temp;
temp=*q;

if(*q==NULL){
*q=malloc(sizeof(struct polynode));
temp=*q;
}
else{
while(temp->link!=NULL)
temp=temp->link;

temp->link=malloc(sizeof(struct polynode));
temp=temp->link;
}
temp->coeff=x;
temp->exp=y;
temp->link=NULL;
}

display_poly(struct polynode *q){
while(q!=NULL){
printf("%.1fx^%d : ",q->coeff,q->exp);
q=q->link;
}
printf("\b\b\b");
}

void poly_multiply(struct polynode *x,struct polynode *y,struct polynode **m){
struct polynode *y1;
float coeff1,exp1;

y1=y;

if(x==NULL && y==NULL)
return;

if(x==NULL)
*m=y;
else{
if(y==NULL)
*m=x;
else{
while(x!=NULL){
while(y!=NULL){
coeff1=x->coeff*y->coeff;
exp1=x->exp+y->exp;
y=y->link;
padd(coeff1,exp1,m);
}
y=y1;
x=x->link;
}
}
}
}

padd(float c,int e,struct polynode **s){
struct polynode *r,*temp=*s;

if(*s==NULL || e>(*s)->exp){
*s=r=malloc(sizeof(struct polynode));
(*s)->coeff=c;
(*s)->exp=e;
(*s)->link=temp;
}
else{
while(temp!=NULL){
if(temp->exp==e){
temp->coeff+=c;
return;
}
if(temp->exp>e && (temp->link==NULL || temp->link->exp<e)){
r=malloc(sizeof(struct polynode));
r->coeff=c;
r->exp=e;
r->link=temp->link;
temp->link=r;
return;
}
temp=temp->link;
}
r->link=NULL;
temp->link=r;
}
}
