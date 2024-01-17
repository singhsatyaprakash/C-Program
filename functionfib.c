#include<stdio.h>

int main()
{
    int fib(int,int);
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
int a=0,b=1;
printf("0 1 ");
for(int i=1;i<=n;i++)
{
   printf("%d ",fib(a,b)); 
} 
return 0;}
int fib(int x,int y)
{
int s;
s=x+y;
x=y;
y=s;
return s;
}

