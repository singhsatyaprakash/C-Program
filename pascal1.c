#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
       int first=1;
        for(k=0;k<=i;k++)
        {
            printf("%3d ",first);
            first=first*(i-k)/(k+1);
        }
        printf("\n");
    }
}