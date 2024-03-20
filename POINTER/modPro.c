#include<stdio.h>
void algebra(int,int,int*,int*);
int main(){
    int a,b;
    printf("Enter num1 and num2:");
    scanf("%d%d",&a,&b);
    int mod,prod;
    algebra(a,b,&mod,&prod);
    printf("modulus:%d\nProduct:%d",mod,prod);
}
void algebra(int a,int b,int*mod,int*prod){
    *mod=a/b;
    *prod=a*b;
    return;
}