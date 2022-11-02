#include <stdio.h>
#include <stdlib.h>
// call by value
void swap(int x,int y){
    int f;
    f=x;
    x=y;
    y=f;
    printf("x=%d y=%d\n",x,y);
}
// call by reference
void swapx(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("x=%d y=%d\n",*x,*y);
}
int main(){
    int a=5,b=10;
    swap(a,b);
    printf("a = %d,b=%d \n",a,b);
    int d=20,e=30;
    swapx(&d,&e);
    printf("a=%d b=%d\n",d,e);
    return 0;
}
