#include <stdio.h>

int main() {
    int i, j,l1,l2,r1,r2;
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
    printf("Enter first coordinate(l1,r1):\n ");
    scanf("%d%d",&l1,&r1);
    printf("Enter second coordinate(l2,r2):\n ");
    scanf("%d%d",&l2,&r2);
    int sum=0;
        for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            sum+=matrix[i][j];
        }
    }
    printf("sum of rectangle form (%d,%d) to (%d,%d)=%d",l1,r1,l2,r2,sum);
    return 0;

}
