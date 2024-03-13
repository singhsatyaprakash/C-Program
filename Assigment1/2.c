/*Write a C program to read two square matrices of non-zero elements of order M X M and then subtract the elements of the second matrix from the first matrix. Then display the Intermediate matrix & final resultant matrix by dividing all the elements by 2 to the console.
Sample input:
Enter the order: 3 3
Enter the elements of the first matrix: 2 4 6 8 10 12 14 16 18
Enter the elements of the second matrix: 1 1 1 2 2 2 3 3 3
Output:
Intermediate matrix:
1 3 5
6 8 10
11 13 15
Final matrix:
0.5 1.5 2.5
3 4 5
5.5 6.5 7.5
*/
#include<stdio.h>
void main(){
    int m,i=0,j=0;
    printf("Enter the order:");
    scanf("%d",&m);
    int arr[m][m];
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[m][m];
        printf("Enter the elements of second matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    //subtracting first and second matrix.
    int sub[m][m];
    printf("Intermediate matrix:\n");
        for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            sub[i][j]=arr[i][j]-brr[i][j];
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    //sub matrix diving by factor 2
    float fin[m][m];
    printf("Final matrix:\n");
        for(i=0;i<m;i++){
        for(j=0;j<m;j++){
        //     if(sub[i][j]%2==0){//even
        //   printf("%d ",sub[i][j]/2);
        //     }
        //     else//odd
        //     printf("%0.1f ",sub[i][j]/2.0);
        fin[i][j]=(float)sub[i][j]/2;
            printf("%0.1f ",fin[i][j]);
        }
        printf("\n");
    }   
}