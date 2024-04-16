/*Illustrate with a flowchart and write a C program to read a matrix of the order M x N and then read an element K from the user. Perform an integer division on all the elements by dividing with the element K and replacing them with their remainders. Then find & display the sum of those replaced elements which are non-zero to the console. Implement using pointers.
10 25 42
65 70 98
35 87 77
Sample Input:
Enter a element K: 5
0 0 2
0 0 8
0 7 7
The final sum is: 24*/
#include<stdio.h>
int main(){
    int n,m,sum=0;
    printf("Enter the order of first matrix(nxm): ");
    scanf("%d%d",&n,&m);
    int arr[n][m]; 
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             *(*(arr + i) + j)%=5;
           sum+=*(*(arr + i) + j);
           printf("%d ",*(*(arr+i)+j));
        }
        
        printf("\n");
    }
     printf("The sum of the matrix is: %d ",sum);
     return 0;
}