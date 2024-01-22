#include<stdio.h>
int main()
{ //without using thrid array
    int arr[2][6]={2,4,6,5,3,9,3,45,6,55,77,88};
    int brr[2][6]={3,4,5,6,7,8,9,0,1,2,3,4};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<6;j++)
        {
            arr[i][j]= arr[i][j]+brr[i][j];
        }
    }
    printf(" \nAdded matrix:\n"); 
           for(int i=0;i<2;i++){
        for(int j=0;j<6;j++)
        {
            printf("%d ",arr[i][j]);
        }
          printf("\n");
    }
}
// #include<stdio.h>
// int main()
// { // using third array...
//     int arr[2][6]={2,4,6,5,3,9,3,45,6,55,77,88};
//     int brr[2][6]={3,4,5,6,7,8,9,0,1,2,3,4};
//     int matrix[2][6];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<6;j++)
//         {
//             matrix[i][j]= arr[i][j]+brr[i][j];
//         }
//     }
//     printf(" \nAdded matrix:\n"); 
//            for(int i=0;i<2;i++){
//         for(int j=0;j<6;j++)
//         {
//             printf("%d ",matrix[i][j]);
//         }
//           printf("\n");
//     }
// }