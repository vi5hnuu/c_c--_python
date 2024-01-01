
#define cube(x) (x*x*x)
void main(){
int a,b=3;
a=cube(b++);
printf("%d %d",a,b);
}
