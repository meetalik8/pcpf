#include <stdio.h>
#include <stdlib.h>
extern char c='z';
char a='p';
void fun1(){
    printf("\n value of a at entry in function 1 is: %c",a);
    a='r';
    printf("\n value of a at exiting function 1 is: %c",a);
}
void fun2(){
    char b='j';
    int i;
     printf("\n value of b at entry in function 2 is: %c",b);
     b='k';
    for(i=1;i<3;i++){
        char d=b++;
         printf("\n value of d after modification in function 2 is: %c",d);
    }
    printf("\n value of b after modification in function 2 is: %c",b);
}
void main(){
    printf("\n value of c at entry in main is %c",c);
    printf("\n value of a at entry in main is %c",a);
    c='y';
    a='q';
    fun1();
    fun2();
    printf("\n value of c after modification in main is %c",c);
    printf("\n value of a after modification in main is %c",a);
}
