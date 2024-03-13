/*Design a UDF to find the product and quotient of two numbers passed to it from the calling program. Display the product and the quotient in the main program. Write a C program to read the two numbers in the main program & also display their product and quotient. Implement using a pointer.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
void solve( int a,int b,int *P,float *Q){
     *P=a*b;
     *Q=(float)a/b;
     return;
}
int main(){
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    int P;
    float Q;
    solve(num1,num2,&P,&Q);
    printf("Product is:%d\n",P);
    printf("Quotient is:%0.2f",Q);
    return 0;
}