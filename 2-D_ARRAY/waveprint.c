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
    for(j=0;j<n;j++){
        if(j%2==0){
            for(i=m-1;i>=0;i--){
                printf("%d ",matrix[i][j]);
            }
        }
        else{
              for(int i=0;i<m;i++){
                printf("%d ",matrix[i][j]);
              }
        }
    }
    return 0;
}