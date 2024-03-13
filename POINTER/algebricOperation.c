#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    
float arr[N];
    
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%f", &arr[i]);
    }
    
    float *ptr = &arr[0];
    
    for (i = 0; i < N; i++) {
        *(ptr+i) = (*(ptr+i)* 2) / 3;
        printf("%0.2f ",*(ptr+i));
        // ptr++;
    }
    
    // printf("Modified array:\n");
    // for (i = 0; i < N; i++) {
    // }
    
    
    return 0;
}
