#include<stdio.h>
void check(int,int[]);
void main(){
    int arr[5]={1,2,3,4,5};
    check(arr,5);
}
void check(int n,int arr[n]){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        }
}