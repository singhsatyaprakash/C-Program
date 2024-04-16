// #include<stdio.h>
// void separate(int even[],int odd[],int* m, int *n,int N){
//     while(N>0){
//          int d=N%10;
//         if(d%2==0){
//            even[*m]=d;
//            *m+=1; 
//         }
//         else{
//             odd[*n]=d;
//             *n+=1;
//         }
//         N/=10;
//     }
// }
// void main(){
//     int N,m=0,n=0;
//     printf("Enter any number: ");
//     scanf("%d",&N);
//     int even[25],odd[25];
//     separate(even,odd,&m,&n,N);
//     for(int i=0;i<m;i++){
//         printf("%d ",even[i]);
//     }
//     printf("\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",odd[i]);
//     }
// }
#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

// Define a structure for employee details
struct Employee {
    int EmpCode;
    char Emp_Name[MAX_NAME_LENGTH];
    float Salary;
};

// Define a union to calculate memory required
union MemoryCalculator {
    struct Employee emp;
    char buffer[sizeof(struct Employee)];
};

int main() {
    // Create an instance of the structure
    struct Employee employee;

    // Calculate the size of the structure
    size_t size_struct = sizeof(struct Employee);

    // Create an instance of the union
    union MemoryCalculator calculator;

    // Calculate the size of the union
    size_t size_union = sizeof(calculator);

    // Print the sizes
    printf("Size of struct Employee: %zu bytes\n", size_struct);
    printf("Size of union MemoryCalculator: %zu bytes\n", size_union);

    return 0;
}
