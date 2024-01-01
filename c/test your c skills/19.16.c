#include<stdio.h>

struct stud{
int rollno;
int marks;
char name[20];
};

int sort_rn(const void *,const void *);
int sort_name(const void *,const void *);
int sort_marks(const void *,const void *);

void main(){
static struct stud ss[]={{15,96,"akshay"},{2,97,"madhuri"},{8,85,"aishvarya"}};
int x,w;
w=sizeof(struct stud);
printf("\nIn order of roll no.\n");
qsort(ss,3,w,sort_rn);
for(int x=0;x<3;x++)
printf("%d %s %d\n",ss[x].rollno,ss[x].name,ss[x].marks);

printf("\nIn order of names.\n");
qsort(ss,3,w,sort_name);
for(int x=0;x<3;x++)
printf("%d %s %d\n",ss[x].rollno,ss[x].name,ss[x].marks);

printf("\nIn order of marks.\n");
qsort(ss,3,w,sort_marks);
for(int x=0;x<3;x++)
printf("%d %s %d\n",ss[x].rollno,ss[x].name,ss[x].marks);

}

int sort_rn(const void *a,const void *b){
struct stud *t1=(struct stud *)a;
struct stud *t2=(struct stud *)b;
return (t1->rollno-t2->rollno);
}

int sort_name(const void *a,const void *b){
struct stud *t1=(struct stud *)a;
struct stud *t2=(struct stud *)b;
return (strcmp(t1->name,t2->name));
}

int sort_marks(const void *a,const void *b){
struct stud *t1=(struct stud *)a;
struct stud *t2=(struct stud *)b;
return ((t1->marks,t2->marks));
}
