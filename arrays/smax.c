#include<stdio.h>
#include<limits.h>
void main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int smax=INT_MIN;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&& max!=arr[i]){
            smax=arr[i];
        }
    }

    printf("second max element of array is:%d\n",smax);
    printf(" max element of array is:%d",max);
}