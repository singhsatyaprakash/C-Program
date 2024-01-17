/*Write a C program to print the following pattern.
    1
   22
  333
 4444
55555
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
void main(){
    int a=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",a);
        }
        a++;
    printf("\n");}
}
OUTPUT:
    1
   22
  333
 4444
55555