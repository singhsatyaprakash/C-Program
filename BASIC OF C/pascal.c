/*Write a C program to print Pascal’s triangle.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E */
#include<stdio.h>
int factorial(int x){
int fact=1;
for(int i=1;i<=x;i++){
fact=fact*i;}
return fact;
}
int combination(int n,int r){
int ncr=factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}
int main(){
int n=4;
for(int i=0;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        printf("  ");
    }
    for(int j=0;j<=i;j++){
    int icj=combination(i,j);
    printf(" %d  ",icj);
    }
printf("\n");
}
 return 0;
}