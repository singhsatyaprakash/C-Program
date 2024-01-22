#include <stdio.h>

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
 int max = matrix[0][0], min = matrix[0][0], max_i = 0, max_j = 0, min_i = 0, min_j = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                max_i = i;
                max_j = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    printf("Maximum element: %d at index [%d][%d]\n", max, max_i, max_j);
    printf("Minimum element: %d at index [%d][%d]\n", min, min_i, min_j);

    return 0;
}

// #include<stdio.h>
// void main()
// {
//     int r,c,max_i,max_j,min_i,min_j;
//     printf("Enter no. of rows: ");
//     scanf("%d",&r);
//     printf("Enter no. of columns: ");
//     scanf("%d",&c);
//     int arr[r][c];
//     printf("enter elements of r*c matrix:\n");
//     for(int i=0;i<r;i++)
//     {fflush(stdin);
//         for(int j=0;j<c;j++)
//         {fflush(stdin);
//          scanf("%d",&arr[i][j]);
//         }
//     }
//     int max=arr[0][0];
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//                 max_i=i;
//                 max_j=j;
//             }
//         }
//     }
//      int min=arr[0][0];
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//                 min_i=i;
//                 min_j=j;
//             }
//         }
//     }
//  printf("Min element of arrays=%d at index(%d,%d)",min,min_i,min_j);
//  printf("Max element of arrays=%d at index(%d,%d)",max,max_i,max_j);
// }