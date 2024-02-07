#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n ");
    for(int i=0;i<n;i++){
        fflush(stdin);
        scanf("%d\n",&n);
    }
    i=0;
    j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}