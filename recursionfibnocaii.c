/*Write a recursion function to generate and display Fibonacci series for N terms: 
For Ex.
Input: N=7
Output: 0 1 1 2 3 5 8*/
#include<stdio.h>
int fun(int);
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         int res=fun(i);
        printf("%d",res);
    }
}
int fun(int x)
{
    
}