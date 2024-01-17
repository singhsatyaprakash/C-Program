//sum of two number..using functions..
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("enter a: ");
    scanf("%d",&a);
    int b;
    printf("enter b: ");
     scanf("%d",&b);
    int sum=add(a,b); 
    printf("sum=%d",sum);
    return 0;
}