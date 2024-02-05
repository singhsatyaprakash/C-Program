#include<stdio.h>
int main() {
    int i,j;
    int m,n;
    printf("Enter no. of rows: ");
    scanf("%d",&m);
    printf("Enter no. of columns: ");
    scanf("%d",&n);
    int matrix[m][n];
    printf("enter elements of r*c matrix:\n");
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         scanf("%d",&matrix[i][j]);
        }
    }
    // while(i==m/2&&(j==(n-1)/2||j==n/2))
    // {   int i=0;
        for(i=0,j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        for(j=n;i<m;i++){
            printf("%d ",matrix[i][j]);
        }
    
    return 0;
}
