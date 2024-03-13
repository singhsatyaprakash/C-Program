#include<stdio.h>
void main(){
    int x=100;
    int *ptr;
    ptr=&x;
    printf("%d",ptr);//adress of x
    printf("\n%d",&ptr);//adress of pointer
    printf("\n%d",*ptr);//acess the value,going to point the value.
}