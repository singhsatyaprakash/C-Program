// #include <stdio.h>

// int main() {
//     int matrix[5][5], i, j;

//     for (i = 0; i < 5; i++) {
//         for (j = 0; j < 5; j++) {
//             matrix[i][j] = 10;
//         }
//     }

//     printf("Matrix:\n");
//     for (i = 0; i < 5; i++) {
//         for (j = 0; j < 5; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// } 
#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    int a;
    printf("Enter you to at all indices: ");
    scanf("%d",&a);
            for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             arr[i][j]=a;
        }
    }
    printf("\n\n"); 
           for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
          printf("\n");
    }
}