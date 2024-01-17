/*Develop a C program to find minimum number in the array of N elements.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
#include<limits.h>
void main(){
    int n,arr[n];
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter elements:");
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimum number of array is:%d",min);
}