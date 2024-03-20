#include<stdio.h>
void main(){
    int i,j;
    int m,n;
    printf("Enter row and columns of matrix:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,product=1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum+=arr[i][j];
            product*=arr[i][j];
        }
    }
    printf("Sum of all elements:%d\nProduct of all elements:%d",sum,product);
}