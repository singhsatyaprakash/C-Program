//WACP to sort elements of array from particular index in increasing order.
#include<stdio.h>
int main(){
    int n;
    printf("How many elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the index from you want to sort:");
    scanf("%d",&k);
    //sorting
    for(int i=k;i<n;i++){
        for(int j=k+1;j<n;j++){
            if(arr[i]<arr[j]){//swaping
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 