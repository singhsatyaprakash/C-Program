#include<stdio.h>
void main(){
    int i,n,product=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        product*=i;// product=product*i
    }
    printf("factorial of %d is %d",n,product);
}