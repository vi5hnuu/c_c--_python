#include<stdio.h>

#define MAX 10

struct btreenode{
struct btreenode *leftchild;
struct btreenode *rightchild;
int data;
};

void main(){
struct btreenode *bt;

int req,i=0,num;
bt=NULL;

printf("\nSpecify the number of nodes to be inserted :");
scanf("%d",&req);

while(i++<req){
printf("\nEnter the data :");
scanf("%d",&num);
insert(&bt,num);
}

inorder(bt);
}

insert(struct btreenode **s,int num){
if((*s)==NULL){
*s=malloc(sizeof(struct btreenode));
(*s)->leftchild=NULL;
(*s)->data=num;
(*s)->rightchild=NULL;
return;
}
else{
if(num<(*s)->data)
insert(&((*s)->leftchild),num);
else
insert(&((*s)->rightchild),num);
}
return;
}

inorder(struct btreenode *currentnode){
    printf("\nlist :");
int top=0;
struct btreenode *nodestack[MAX];

while(1){
while(currentnode!=NULL){
top++;
if(top>MAX){
printf("Stack is full.");
exit(0);
}
else{
nodestack[top]=currentnode;
currentnode=currentnode->leftchild;
}
}

if(top!=0){
currentnode=nodestack[top];
top--;
printf("%3d",currentnode->data);
currentnode=currentnode->rightchild;
}
else
break;
}
}
