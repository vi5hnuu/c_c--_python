#include<stdio.h>


struct btreenode{
struct btreenode *leftchild;
struct btreenode *rightchild;
int data;
};

void insert(struct btreenode**,int);
void inorder(struct btreenode *);
void swap(struct btreenode **);

void main(){
struct btreenode *bt;
int req,i=0,num;
bt=NULL;
printf("\nSpecify the number of data items to be inserted :");
scanf("%d",&req);

while(i++<req){
printf("\nEnter the data :");
scanf("%d",&num);
insert(&bt,num);
}

printf("\nInorder traversal before swapping :");
inorder(bt);
swap(&bt);
printf("\nInorder traversal after swapping :");
inorder(bt);
}

void insert(struct btreenode **sr,int num){
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

void inorder(struct btreenode *sr){
if(sr!=NULL){
inorder(sr->leftchild);
printf("%3d",sr->data);
inorder(sr->rightchild);
}
else
return;
}

void swap(struct btreenode **sr){
struct btreenode *tmp;
if(*sr!=NULL){
tmp=(*sr)->leftchild;
(*sr)->leftchild=(*sr)->rightchild;
(*sr)->rightchild=tmp;
swap(&((*sr)->leftchild));
swap(&((*sr)->rightchild));
}
else
return;
}
