//to input n numbers in an array and find their sum and average.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
     int arr[n];
     printf("Enter the elements:\n");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     int sum=0;
      for(int i=0;i<n;i++)
      {
         sum=sum+arr[i];
      }
      float avg=(float)sum/n;
      printf("sum of array=%d\naverage=%.2f",sum,avg);
}