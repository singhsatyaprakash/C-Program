#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the number of line: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=i+4;j++)
    {printf("* ");}
    printf("\n");}
}