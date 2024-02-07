/*Write a C Program to find the sum of digits of a number.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
void main(){
    int num,sum=0,d;
    printf("Enter num:");
    scanf("%d",&num);
    for(int i=1;num!=0;i++){
        d=num%10;
        sum+=d;
        num=num/10;
    }
    printf("Sum of digits=%d",sum);
}
// OUTPUT:
// Enter num:45045
// Sum of digits=18
// Enter num:67549
// Sum of digits=31
// Enter num:12345
// Sum of digits=15
