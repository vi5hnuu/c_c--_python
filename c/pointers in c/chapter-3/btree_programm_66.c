#include<stdio.h>

struct btreenode{
int data;
struct btreenode *leftchild;
struct btreenode *rightchild;
};

void main(){
struct btreenode *bt;
bt=NULL;
int i=1,num,req;

printf("\nEnter the number of data items to add :");
scanf("%d",&req);

while(i++<=req){
printf("\nEnter the data :");
scanf("%d",&num);
insert(&bt,num);
}

printf("\nInorder traversel :");
inorder(bt);

printf("\nPreorder traversal :");
preorder(bt);

printf("\npostorder traversal :");
postorder(bt);
}

insert(struct btreenode **sr,int num){
if(*sr==NULL){
*sr=malloc(sizeof(struct btreenode));
(*sr)->data=num;
(*sr)->leftchild=NULL;
(*sr)->rightchild=NULL;
return;
}
else{
if(num<(*sr)->data)
insert(&((*sr)->leftchild),num);
else
insert(&((*sr)->rightchild),num);
}
return;
}

inorder(struct btreenode *sr){
if(sr!=NULL){
inorder(sr->leftchild);
printf("%5d",sr->data);
inorder(sr->rightchild);
}
else
return;
}

preorder(struct btreenode *sr){
if(sr!=NULL){
printf("%5d",sr->data);
preorder(sr->leftchild);
preorder(sr->rightchild);
}
else
return;
}

postorder(struct btreenode *sr){
if(sr!=NULL){
postorder(sr->leftchild);
postorder(sr->rightchild);
printf("%5d",sr->data);
}
}
