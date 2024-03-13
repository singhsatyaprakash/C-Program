#include<stdio.h>
void main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int max=*ptr;
    for(int i=0;i<n;i++){
        if(max<*(ptr+i)){
            max=*(ptr+i);
        }
    }
    printf("Maximum is:%d",max);
}