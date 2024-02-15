// #include<stdio.h>
// int sumSecondaryDiagonal(int,int[][]);
// void main(){
//     int n,sum;
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
// sum=sumSecondaryDiagonal(arr,n);
// printf("sum of secondary diagonal elements is:%d",sum);
// }
// int sumSecondaryDiagonal(int n,int arr[][n]){
//     int sum=0;
//         for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j==n-1){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     return sum;
// }
#include <stdio.h>
int sumSecondaryDiagonal(int, int[][10]);
void main() {
    int n, sum;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    sum = sumSecondaryDiagonal(n, arr);
    printf("Sum of secondary diagonal elements is: %d", sum);
}
int sumSecondaryDiagonal(int n, int arr[][10]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
