#include<graphics.h>
int main(){
    int gd=0,gm;
initgraph(&gd,&gm,"");
arc(50,20,50,300,100);
closegraph();
restorecrtmode();
}
