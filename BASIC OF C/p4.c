/* write a C Program to read M x N integers into a 2-D array from the user 
and then find the sum of the squares of the elements on its principal (main) diagonal.
 Display the final sum to the console.*/
#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    
    printf("Enter the elements of the array: \n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The elements of the array are: \n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("The sum of the squares of the elements on the principal diagonal is: ");
    for(i=0; i<m; i++) {
        sum += arr[i][i] * arr[i][i];
    }
    printf("%d", sum);
    
    return 0;
}