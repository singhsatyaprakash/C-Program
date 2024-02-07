// //to input n number in an array and display odd number and number at odd incides..
// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements:\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("odd number in array are:");
//      for(int i=0;i<n;i++)
//     {
//         if(arr[i]/2!=0)
//         {
//             printf("%d ",arr[i]);
//         }
//     }
//         printf("\nNumber at odd incides in array are:");
//      for(int i=0;i<n;i++)
//     {
//         if(i/2!=0)
//         {
//             printf("%d ",arr[i]);
//         }
//     }
// }
#include<stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nOdd numbers in the array are: ");
    for(i=0; i<n; i++) {
        if(arr[i]%2!=0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nNumbers at odd indices are: ");
    for(i=1; i<n; i+=2) {
        printf("%d ", arr[i]);
    }
    return 0;
}
