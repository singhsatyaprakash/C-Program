#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    int j=n-1;
    for(int i=0;i<j;i++){
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=temp;
        j--;
    }
        for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}