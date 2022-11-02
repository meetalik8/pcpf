#include<stdio.h>
char a='p';
void f1(){
    int a = 100;
  printf("\nThe value of integer a in f2 is %d\n\n",a);  
  }
void main(){
    printf("\nThe value of character a at entry in main is %c\n",a);
    a = 'q';
    f1();
    printf("The value of character a after modification in main is %c\n",a); 
    }
