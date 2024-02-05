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
    int idx;
    printf("enter index:");
    scanf("%d",&idx);
    arr[n-1];
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
       for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }

}
