// #include<stdio.h>
// void main()
// {
//     int n;
// printf("enter n:");
// scanf("%d",&n);
// int arr[n];
// printf("Enter the elements:\n");
// for(int i=0;i<n;i++)
// {
//     fflush(stdin);
//     scanf("%d",&arr[i]);
// }
// printf("given array:");
// for(int i=0;i<n;i++)
// {
//     printf("%d ",arr[i]);
// }
// //bubble sorting
// for(int i=0;i<n-1;i++)
// {
//     for(int j=0;j<n-1-i;j++)
//     {
//         // bool flag = true;//array is not sorted yet.
//         if(arr[j]>arr[j+1])
//         {
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//             // bool = false;
//         }
//     }
//     // if(bool==true)
//     // break;
// }
// printf("sorted arrays:");
// for(int i=0;i<n;i++)
// {
//     printf("%d ",arr[i]);
// }
// }
#include <stdio.h>

void main() {
    int n;

    // Prompt user for the size of the array
    printf("Enter n: ");
    scanf("%d", &n);

    // Declare the array with the specified size
    int arr[n];

    // Prompt user to input the elements of the array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the given array
    printf("Given array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bubble sort
    for (int i = 0; i < 2; i++) {
        int swapped = 0; // To check if any swapping happened in the current pass
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
