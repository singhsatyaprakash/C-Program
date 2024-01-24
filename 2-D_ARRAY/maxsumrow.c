#include <stdio.h>
#include<limits.h>
int main() {
    // int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int matrix[r][c];
    printf("enter elements of r*c matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         scanf("%d",&matrix[i][j]);
        }
    }
      int max=INT_MIN,max_i;
    for (i = 0; i < r; i++) {
       int sum=0;
        for (j = 0; j < c; j++) { 
            sum+=matrix[i][j];
            }
            if (sum> max) {
            max = sum;
            max_i=i;
            }
    }
          printf("Maximum element: %d of indexrow %d\n", max, max_i);
    return 0;
}