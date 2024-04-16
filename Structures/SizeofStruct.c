/*Develop a program to initialize a structure student with members: roll number, age, gender, marks (assume marks as float data type). Calculate the size of structure.*/
#include<stdio.h>
#pragma pack(1);
typedef struct student{
    int roll_number;
    int age;
    char gender;
    float marks;
} STD;

int main(){
    struct student s1;
    STD s2;
    
    printf("%u", sizeof(s1));
    printf("\n%u", sizeof(s2));
}
