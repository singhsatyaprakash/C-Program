#include<stdio.h>
int sum(int n) 
{
if(n==1)
return 1;
else
return n+sum(n-1);
}
int main()
{
    int n; 
    printf("Enter n: ");
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s);
    return 0;
}
//WRONG
// #include<stdio.h>
// int sum(int n) 
// {
// if(n==0){
// printf("%d",sum);

// return 0;
// }
// else
//     return n+sum(n-1);
// }
// int main()
// {
//     int n; 
//     printf("Enter n: ");
//     scanf("%d",&n);
//     sum(n);
//     // int fact=sum(n);
//     // printf("%d",fact);
//     return 0;
// }
