/*PRINT THE PATTERN...
1234
123
12
1*/
#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=4;i++)
{for(j=1;j<=5-i;j++)
{printf("%d",j);}
printf("\n");
}}