/*Write a C Program to read M x N integers into a 2-D array from the user and then 
find whether it’s an upper triangular matrix or not. 
Display appropriate message to the console.*/
#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("Enter no. of rows:");
    scanf("%d",&m);  
     printf("Enter no. of columns:");
    scanf("%d",&n);
    int arr[m][n]; 
    printf("Enter the element of matrix:");             
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",arr[i][j]);
        }
    }            
    for(i=1;i<m*n;i++)
    {  for(j=0;j<n;j++)
    {
        if(i>=j&&arr[i][j]==0)
         {continue;
        }
        else{
    
        }
    }
}
}
