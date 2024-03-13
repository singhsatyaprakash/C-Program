/*
Develop a  C program to test whether a given matrix of n*n is an upper triangular matrix is the one in which all elements below its principal diagonal are zero.
Name-SATYA PRAKASH SINGH
Roll No:60
Section-B1
Course-B.TECH
Branch-C.S.E 
*/
#include<stdio.h>
void main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j&&arr[i][j]!=0){
                count=1;
                break;
            }
        }
    }
    if(count==1){
        printf("No");
    }
    else
    printf("Yes");
}
