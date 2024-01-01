#include<stdio.h>
#include<stdlib.h>

enum boolean{
false=0,
true=1
};

struct thtree{
enum boolean left;
struct thtree *leftchild;
int data;
struct thtree *rightchild;
enum boolean right;
};

void main(){
struct thtree *th_head;

insert(&th_head,11);
/*insert(&th_head,9);
insert(&th_head,13);
insert(&th_head,8);
insert(&th_head,10);
insert(&th_head,12);
insert(&th_head,14);
insert(&th_head,15);
insert(&th_head,7);


printf("\nThreaded binary tree before deletion :");
inorder(th_head);

delete(&th_head,10);
printf("\nThreaded binary tree after deletion :");
inorder(th_head);

delete(&th_head,14);
printf("\nThreaded binary tree after deletion :");
inorder(th_head);

delete(&th_head,8);
printf("\nThreaded binary tree after deletion :");
inorder(th_head);

delete(&th_head,13);
printf("\nThreaded binary tree after deletion :");
inorder(th_head);
*/
}

insert(struct thtree **s,int num){
struct thtree *head=*s,*p,*z;
z=malloc(sizeof(struct thtree));
z->left=true;
z->data=num;
z->right=true;

if(*s==NULL){
head=malloc(sizeof(struct thtree));
head->left=false;
head->leftchild=z;
head->data=9999;
z->rightchild=head;
head->right=false;
*s=head;
z->leftchild=head;
z->rightchild=head;
}
else{
p=head->leftchild;

while(p!=head){
if(p->data>num){
if(p->left!=true)
p=p->leftchild;
else{
z->leftchild=p->leftchild;
p->leftchild=z;
p->left=false;
z->right=true;
z->rightchild=p;
return;
}
}
else{
if(p->data<num){
if(p->right!=true)
p=p->rightchild;
else{
z->rightchild=p->rightchild;
p->rightchild=z;
p->right=false;
z->left=true;
z->leftchild=p;
return;
}
}
}
}
}
}

delete(struct thtree **root,int num){
int found;
struct thtree *parent,*x,*xsucc;
if(*root==NULL){
printf("Tree is empty.");
return;
}
parent=x=NULL;

search(root,num,&parent,&x,&found);

if(!found){
printf("Data to be deleted not found.");
return;
}

if(x->left==false && x->right==false){
parent=x;
xsucc=x->rightchild;

while(xsucc->left==false){
parent=xsucc;
xsucc=xsucc->leftchild;
}
x->data=xsucc->data;
x=xsucc;
}

if(x->left==true && x->right==true){
if(parent->rightchild==x){
parent->right=true;
parent->rightchild=x->rightchild;
}
else{
parent->left=true;
parent->leftchild=x->leftchild;
}
free(x);
return;
}

if(x->left==true && x->right==false){
if(parent->leftchild==x){
parent->leftchild=x->rightchild;
x->rightchild->leftchild=x->leftchild;
}
else{
parent->rightchild=x->rightchild;
x->rightchild->leftchild=parent;
}
free(x);
return;
}

if(x->left==false && x->right==true){
if(parent->leftchild==x){
parent->leftchild=x->leftchild;
x->leftchild->rightchild=parent;
}
else{
parent->rightchild=x->leftchild;
x->leftchild->rightchild=x->rightchild;
}
free(x);
return;
}
}

search(struct thtree **root,int num,struct thtree **par,struct thtree **x,int *found){
struct thtree *q;
q=(*root)->leftchild;
*found=false;
*par=NULL;

while(q!=root){
if(q->data==num){
*found=true;
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

inorder(struct thtree *root){
struct thtree *p;
p=root->leftchild;

while(p!=root){
while(p->left==false)
p=p->leftchild;
printf("%3d",p->data);

while(p->right==true){
p=p->rightchild;
if(p==root)
break;
printf("%3d",p->data);
}
p=p->rightchild;
}
}
