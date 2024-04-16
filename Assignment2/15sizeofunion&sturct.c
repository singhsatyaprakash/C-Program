#include <stdio.h>

// Define a structure to store employee details
struct EmployeeStruct {
    int EmpCode;
    char Emp_Name[50];
    float Salary;
};

// Define a union to store employee details
union EmployeeUnion {
    int EmpCode;
    char Emp_Name[50];
    float Salary;
};

int main() {
    // Calculate the size of structure
    printf("Size of EmployeeStruct: %u bytes\n", sizeof(struct EmployeeStruct));
    
    // Calculate the size of union
    printf("Size of EmployeeUnion: %u bytes\n", sizeof(union EmployeeUnion));
    
    return 0;
}
