#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=4;i++)
    {for(k=1;k<=i-1;k++)
    {printf(" ");}
    for(j=1;j<=i+3;j++)
    {printf("*");}
    printf("\n");}
}