/*
Develop C program two binary matrix of order n*n from the user. Perform EX-OR on the element of matrix and print resultant to the screen.
Name-SATYA PRAKASH SINGH
Roll No:60
Section-B1
Course-B.TECH
Branch-C.S.E 
*/
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][n],brr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&brr[i][j]);
        }
        }
        int res[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          res[i][j]=arr[i][j]^brr[i][j];
           printf("%d ",res[i][j]);
        }
        printf("\n");
        }
}