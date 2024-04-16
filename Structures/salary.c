/*Develop a program in C to read a structure in the main program of an Employee that contains Name, EmpCode and Salary as the members. Write a function display the details of the employee in the following format.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include <stdio.h>
struct Employee {
    char name[50];
    char empCode[20];
    float salary;
    int birthYear;
    int birthMonth;
    int birthDay;
};
void displayEmployeeDetails(struct Employee emp) {
    printf("\tABC Corporation\t\n");
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee Code: %s\n", emp.empCode);
    printf("Salary: Rs.%.2f\n", emp.salary);
    printf("Date of Birth: %02d-%02d-%04d\n", emp.birthDay,emp.birthMonth,emp.birthYear);
}
int main() {
    struct Employee emp;
    printf("Enter employee name: ");
    scanf("%[^\n]s", emp.name);
    printf("Enter employee code: ");
    fflush(stdin);
    scanf("%[^\n]s", &emp.empCode);
    printf("Enter employee salary: ");
    fflush(stdin);
    scanf("%f", &emp.salary);
    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d",&emp.birthDay,&emp.birthMonth,&emp.birthYear);
    displayEmployeeDetails(emp);
    return 0;
}