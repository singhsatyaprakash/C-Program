/*Write a C Program to Swap Numbers in Cyclic Order Using Call by Reference. Sample: Input: Enter a, b and c respectively: 1 2 3 Output: Value before swapping: a = 1 b = 2 c = 3 Value after swapping: a = 3 b = 1 c = 2*/
#include<stdio.h>
void swapthree(int*,int*,int*,int );
void main(){
    int a,b,c;
    printf("Enter a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    int n;
    printf("how many times you wants to swap:");
    scanf("%d",&n);
    printf("value before swaping: a = %d   b = %d    c = %d",a,b,c);
    swapthree(&a,&b,&c,n);
    printf("\nvalue after swaping: a = %d   b = %d    c = %d",a,b,c);
}
void swapthree(int*a,int*b,int*c,int n){
    for(int i=0;i<n;i++){
        int temp1=*b;
        int temp2=*c;
        *b=*a;
        *c=temp1;
        *a=temp2;
    }
}