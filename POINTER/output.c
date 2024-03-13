#include<stdio.h>
void main(){
    int num[]={11,22,33,44,55};
    int *ptr;
    ptr=num;
    for(int i=0;i<5;i++){
        printf("%d\t",*ptr);
    }
    printf("\n");
        for(int i=0;i<5;i++){
        printf("%d\t",*ptr+i);
    }
    printf("\n");
        for(int i=0;i<5;i++){
        printf("%d\t",*(ptr+1));
    }
    printf("\n");
        for(int i=0;i<5;i++){
        printf("%d\t",*(ptr+i));
    }

}   