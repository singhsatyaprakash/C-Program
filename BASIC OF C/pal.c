/*Write a C program to read a number from the keyboard and check whether it is palindrome or not.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E 
*/
#include<stdio.h>
void main(){
    int rev=0,d,num;
    int temp=num;
    printf("Enter num:");
    scanf("%d",&num);
        while(num!=0){
            d=num%10;
            rev=rev*10+d;
            num=num/10;
        }
        if(rev==temp)
        printf("%d is palindrom",temp);
    else
    printf("%d is not palindrom",temp);
    }