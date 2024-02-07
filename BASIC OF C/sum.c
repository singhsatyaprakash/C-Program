#include<stdio.h>
void main(){
    int i,j;
    for (i=1;i<=4;i+1)
    {for(j=1;j<=5-i;j+1)
    {printf("*");}
    printf("\n");}
}
