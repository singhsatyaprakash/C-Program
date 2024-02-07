/*Write a C program to print the following pattern.
A 
C D 
F G H
J K L M
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
void main(){
    char ch='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
        ch++;
    }
}
// OUTPUT:
// A 
// C D
// F G H
// J K L M