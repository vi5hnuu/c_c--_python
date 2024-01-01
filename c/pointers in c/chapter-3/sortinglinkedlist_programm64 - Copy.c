#include<stdio.h>

struct node{
int data;
struct node *link;
}*start,*visit;

void main(){
getdata();
printf("linked list before sorting :");
displaylist();
getch();

selection_sort();
printf("\nLinked list after sorting :");
displaylist();
getch();

getdata();
printf("\nlinked list before sorting :");
displaylist();

bubble_sort();
printf("\nLinked list after sorting :");
displaylist();
getch();

}

getdata(){
int val,n;
char ch;
struct node *newnode;

newnode=NULL;
do{
printf("\nEnter the value :");
scanf("%d",&val);
append(&newnode,val);
printf("\nEnter more (y/n)");
ch=getche();
}while(tolower(ch)=='y');
start=newnode;
}

append(struct node **q,int num){
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

displaylist(){
visit=start;
while(visit!=NULL){
printf("%3d",visit->data);
visit=visit->link;
}
}

selection_sort(){
struct node *p,*q,*r,*s,*temp;
p=r=start;
while(p->link!=NULL){
s=q=p->link;
while(q!=NULL){
if(p->data>q->data){
if(p->link==q){
if(p==start){
p->link=q->link;
q->link=p;

temp=p;
p=q;
q=temp;

start=p;
r=p;
s=q;
q=q->link;
}
else{
p->link=q->link;
q->link=p;
r->link=q;

temp=p;
p=q;
q=temp;

s=q;
q=q->link;
}
}
else{
if(p==start){
temp=q->link;
q->link=p->link;
p->link=temp;

s->link=p;

temp=p;
p=q;
q=temp;

s=q;
r=p;/////////////////
q=q->link;
start=p;
}
else{
temp=q->link;
q->link=p->link;
p->link=temp;

r->link=q;
s->link=p;

temp=p;
p=q;
q=temp;

s=q;
q=q->link;
}
}
}
else{
s=q;
q=q->link;
}
}
r=p;
p=p->link;
}
}

bubble_sort(){
struct node *q,*p,*r,*s,*temp;
s=NULL;
while(s!=start->link){
r=p=start;
q=p->link;
while(p!=s){
if(p->data>q->data){
if(p==start){
temp=q->link;
q->link=p;
p->link=temp;

start=q;
r=q;
}
else{
temp=q->link;
q->link=p;
p->link=temp;

r->link=q;
r=q;
}
}
else{
r=p;
p=p->link;
}
q=p->link;
if(q==s)
s=p;
}
}
}
