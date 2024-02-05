#include<stdio.h>
void main(){
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num,idx;
    printf("enter num:");
    scanf("%d",&num);
    printf("enter index:");
    scanf("%d",&idx);
    arr[n+1];
    for(int i=n;i>=idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=num;//inserting
       for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }

}
