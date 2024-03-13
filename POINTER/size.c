#include<stdio.h>
void main(){
    char ch='a';
    char *ptr;
    printf("%d",sizeof(*ptr));//size of int,char,float
    printf("\n%d",sizeof(ptr));//4 byte 32 bits machine
}