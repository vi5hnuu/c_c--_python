#include<stdio.h>

struct node{
int data;
struct node *link;
}*newnode,*start,*visit;

int main(){
int n;
printf("\n\nEnter values for linked list.\n");
getdata();
printf("Linked list before sorting :");
displaylist();
n=count(start);

selection_sort(n);
printf("\nlinked list after selection sorting:");
displaylist();
getch();


printf("\n\nEnter values for linked list.\n");
getdata();
printf("\nLinked list before sorting :");
displaylist();
n=count(start);

bubble_sort(n);
printf("\nlinked list after bubble sorting :");
displaylist();
getch();
return 0;
}

getdata(){
int val,n;
char ch;
struct node *new;
new=NULL;

do{
printf("\nEnter a value :");
scanf("%d",&val);
append(&new,val);
printf("\nEnter more values (y/n) :");
ch=getche();
}while(tolower(ch)=='y');
start=new;
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

count(struct node *q){
int c=0;

while(q!=NULL){
q=q->link;
c++;
}
return c;
}

selection_sort(int n){
int i,j,k,temp;
struct node *p,*q;
p=start;
for(i=0;i<n;i++){
q=p->link;
for(j=i+1;j<n;j++){
if(p->data>q->data){
temp=p->data;
p->data=q->data;
q->data=temp;
}
q=q->link;
}
p=p->link;
}
}

bubble_sort(int n){
int i,j,k,temp;
struct node *p,*q;
k=n;
for(i=0;i<n;i++,k--){
p=start;
q=p->link;
for(j=1;j<k;j++){
if(p->data>q->data){
temp=p->data;
p->data=q->data;
q->data=temp;
}
p=p->link;
q=q->link;
}
}
}
