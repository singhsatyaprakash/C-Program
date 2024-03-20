// #include <stdio.h>
#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int secmax=0;
    for(int i=0;i<n;i++){
        if(arr[i]==max)   continue;
        else if(secmax<arr[i]){
            secmax=arr[i];
        }
    }
    printf("The max element is: %d",max);
     printf("\nThe second max element is: %d",secmax);

    
}

// int findSecondMax(int *arr, int size) {
//     int max = *arr;
//     int secondMax = -1;

//     for (int i = 1; i < size; i++) {
//         if (*(arr + i) > max) {
//             secondMax = max;
//             max = *(arr + i);
//         } else if (*(arr + i) > secondMax && *(arr + i) != max) {
//             secondMax = *(arr + i);
//         }
//     }

//     return secondMax;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int secondMax = findSecondMax(arr, size);

//     if (secondMax != -1) {
//         printf("The second maximum element in the array is: %d\n", secondMax);
//     } else {
//         printf("There is no second maximum element in the array.\n");
//     }

//     return 0;
// }
