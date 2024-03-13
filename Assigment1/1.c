/*
Draw a flowchart & design a UDF that returns the by swapping all the elements about the principal diagonal of a matrix. Develop a C program to implement the function by accepting the rows and columns in the main program. Display the swapped matrix in the main program.
Sample input:
Enter the order: 3 3
Enter the elements: 1 2 3 11 12 13 10 20 30
1 2 3
11 12 13
10 20 30
Output: After swapping
1 11 10
2 12 20
3 13 30
*/
#include<stdio.h>
void swap(int m,int n,int arr[][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        }
        return;
}
int main(){
    int m,n;
    //reading rows and columns
    printf("Enter the order:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the elememts:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    swap(m,n,arr);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}