#include <stdio.h>

int main() {
    int i, j;
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int matrix[r][c];
    printf("enter elements of r*c matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         scanf("%d",&matrix[i][j]);
        }
    }
    //     printf("\n");
    //     for(i=0;i<r;i++)
    // {
    //     for(j=0;j<c;j++)
    //     {
    //      printf("%d  ",matrix[i][j]);
    //     }
    //     printf("\n");
    // }
        printf("\n");
    // transopse of matrix changing row to columns wise versa...
         for(i=0;i<c;i++){
         for(j=0;j<r;j++)
        {
         printf("%d  ",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}