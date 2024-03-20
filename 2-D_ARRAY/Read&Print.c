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
    printf("Matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}