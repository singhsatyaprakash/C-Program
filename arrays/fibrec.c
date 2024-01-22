#include<stdio.h>
int fibo(int n)
{
    if(n<=2)
        return 1;
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int p=fibo(n);
    printf("%dth term of fibonaci series is %d",n,p);
    return 0;
}