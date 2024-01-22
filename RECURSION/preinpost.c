// #include<stdio.h>
// void preinpost(int n){
//     if(n==0) return;
//     printf("pre %d\n",n);
//     preinpost(n-1);
//     printf("in %d\n",n);
//     preinpost(n-1);
//     printf("post %d\n",n);
//     return;
// }
// int main()
// {
//     int n; 
//     printf("Enter n: ");
//     scanf("%d",&n);
//     preinpost(n);
//     return 0;
// }
#include<stdio.h>
void preinpost(int n){
    if(n==0) return;
    printf("%d ",n);
    preinpost(n-1);
    printf("%d ",n);
    preinpost(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    int n; 
    printf("Enter n: ");
    scanf("%d",&n);
    preinpost(n);
    return 0;
}