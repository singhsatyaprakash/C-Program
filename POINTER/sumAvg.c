#include<stdio.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=arr;
for(int i=0;i<n;i++){
    sum+=*ptr;
    ptr+=1;
}
printf("sum is:%d",sum);
printf("\naverage is:%.2f",(float)sum/n);
    }