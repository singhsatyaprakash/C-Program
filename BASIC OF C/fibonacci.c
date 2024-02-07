/*Write a C program to generate and print Fibonacci series 0 1 1 2 3 5 8 …. UP TO N terms.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
void main(){
    int N,a=0,b=1,sum=0;
    printf("Enter N:");
    scanf("%d",&N);
    printf("0 1 ");
    for(int i=1;i<=N;i++){
        printf("%d ",sum=a+b);
        a=b;
        b=sum;
    }
}
// OUTPUT:
// Enter N:10
// 0 1 1 2 3 5 8 13 21 34 55 89
