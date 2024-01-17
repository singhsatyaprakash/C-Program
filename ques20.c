/*Develop a user defined function to evaluate the following series and 
print the result in the main function with appropriate message. 
1 + 2*1 + 3*2 + 4*3 ………. upto n terms
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
float series(int n);
void main()
{
    int n,sum;
    printf("Enter n:");
    scanf("%d",&n);
    printf("The sum of series upto %d is %d",n,series(n)+1);
}
float series(int n)
{
    int a=1,b=2,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(a*b);
        a++;
        b++;
    }
    return sum;
}