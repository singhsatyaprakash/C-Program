/*Develop a C program to display Name, Roll Number, Date of Birth and Date of Admission details of a student read from the keyboard where the date of birth and date of admission further consists of three members such as day, month and year in a separate structure. Implement using a C structure.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include <stdio.h>
#include<string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    char name[50];
    int roll_number;
    struct Date date_of_birth;
    struct Date date_of_admission;
};
int main() {
    struct Student student;
    printf("Enter student name: ");
    gets(student.name);
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll_number);

    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &student.date_of_birth.day, &student.date_of_birth.month, &student.date_of_birth.year);

    printf("Enter date of admission (day month year): ");
    scanf("%d %d %d", &student.date_of_admission.day, &student.date_of_admission.month, &student.date_of_admission.year);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Date of Birth: %02d-%02d-%04d\n", student.date_of_birth.day, student.date_of_birth.month, student.date_of_birth.year);
    printf("Date of Admission: %02d-%02d-%04d\n", student.date_of_admission.day, student.date_of_admission.month, student.date_of_admission.year);

    return 0;
}
