/*Develop a C program to sort an array of N elements using any sorting technique.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
int main()
{
   int arr[100], n, i, j, temp, min_index;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("Enter the elements of the array:\n");
   for(i=0; i<n; i++)
      scanf("%d", &arr[i]);
   // Selection sort
   for(i=0; i<n-1; i++)
   {
      min_index = i;
      for(j=i+1; j<n; j++)
      {
         if(arr[j] < arr[min_index])
            min_index = j;
      }
      if(min_index != i)
      {
         temp = arr[i];
         arr[i] = arr[min_index];
         arr[min_index] = temp;
      }
   }
   printf("The sorted array is:\n");
   for(i=0; i<n; i++)
      printf("%d ", arr[i]);
   return 0;
}
// OUTPUT:
// Enter the number of elements in the array: 5
// Enter the elements of the array:
// 9 6 1 2 5
// The sorted array is:
// 1 2 5 6 9