/*Develop a C program to find total and average sales of ‘N’ employees by reading the details such as empcode, name, and sales using array of structures.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<string.h>
typedef struct employee{
        int emp_code;
        char emp_Name[50];
        long sales;
    }e;
void main(){
     int n;
     printf("How many employees: ");
    scanf("%d",&n);
     int total=0;
     float avg=0;
        e emp[n];
         for(int i=0;i<n;i++){
            printf("Enter employee name: ");
            fflush(stdin);
            scanf("%[^\n]s",&emp[i].emp_Name);
            printf("Enter employee code: ");
            scanf("%d",&emp[i].emp_code);
            printf("Enter sales: ");
            scanf("%ld",&emp[i].sales);
            total+=emp[i].sales;
        }
        avg=(float)total/n;
   
    printf("total and average sales are: %d and %0.2f",total,avg);
}