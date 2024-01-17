#include<stdio.h>
int main(){
    int sum=0;
    int arr[7]={5,8,9,3,6,8,8};
    for(int i=0;i<7;i++){
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}