#include<stdio.h>

#define TRUE 1
#define FALSE 0

struct btreenode{
struct btreenode *leftchild;
int data;
struct btreenode *rightchild;
};

void main(){
struct btreenode *bt;
int req,i=0,num,a[]={11,9,13,8,10,12,14,15,7};
bt=NULL;
while(i<=8){
insert(&bt,a[i]);
i++;
}

printf("\nBinary tree before deletion :");
inorder(bt);

delete(&bt,10);
printf("\nBinary tree after deletion :");
inorder(bt);

delete(&bt,14);
printf("\nBinary tree after deletion :");
inorder(bt);

delete(&bt,8);
printf("\nBinary tree after deletion :");
inorder(bt);

delete(&bt,13);
printf("\nBinary tree after deletion :");
inorder(bt);
}

insert(struct btreenode **sr,int num){
if(*sr==NULL){
*sr=malloc(sizeof(struct btreenode));
(*sr)->data=num;
(*sr)->leftchild=NULL;
(*sr)->rightchild=NULL;
}
else{
if(num<(*sr)->data)
insert(&((*sr)->leftchild),num);
else
insert(&((*sr)->rightchild),num);
}
return;
}

delete(struct btreenode **root,int num){
int found;
struct btreenode *parent,*x,*xsucc;

if(*root==NULL){
printf("Tree is Empty.");
return;
}

parent=x=NULL;

search(root,num,&parent,&x,&found);

//if not found
if(found==FALSE){
printf("Data to be deleted not found.");
return;
}

if(x->leftchild!=NULL && x->rightchild!=NULL){
parent=x;
xsucc=x->rightchild;

while(xsucc->leftchild!=NULL){
parent=xsucc;
xsucc=xsucc->leftchild;
}
x->data=xsucc->data;
x=xsucc;
}

if(x->leftchild==NULL && x->rightchild==NULL){
if(parent->rightchild==x)
parent->rightchild=NULL;
else
parent->leftchild=NULL;

free(x);
return;
}

if(x->leftchild==NULL && parent->rightchild!=NULL){
if(parent->leftchild==x)
parent->leftchild=x->rightchild;
else
parent->rightchild=x->rightchild;

free(x);
return;
}

if(x->leftchild!=NULL && x->rightchild==NULL){
if(parent->leftchild==x)
parent->leftchild=x->leftchild;
else
parent->rightchild=x->leftchild;

free(x);
return;
}
}

search(struct btreenode **root,int num,struct btreenode **par,struct btreenode **x,int *found){
struct btreenode *q;
q=*root;
*found=FALSE;
*par=NULL;

while(q!=NULL){
if(q->data==num){
*found=TRUE;
*x=q;
return;
}

if(q->data>num){
*par=q;
q=q->leftchild;
}
else{
*par=q;
q=q->rightchild;
}
}
}

inorder(struct btreenode *sr){
if(sr!=NULL){
inorder(sr->leftchild);
printf("%3d",sr->data);
inorder(sr->rightchild);
}
else
return;
}
