/*Develop a C program to read the following details of N employees into appropriate data storage.
EmpNo, Name and Salary.
Display all the details of the employees in the descending order of their salary to the console.*/
#include<stdio.h>
#include<string.h>
typedef struct employees{
    int EmpNo;
    char name[50];
    int salary;
}emp;
void getdetails(int n){
    emp e[n];
    printf("Enter the details:\n");
    for(int i=0;i<n;i++){
        printf("Emp No:");
        fflush(stdin);
        scanf("%d",&e[i].EmpNo);
        printf("Name:");
        fflush(stdin);
        gets(e[i].name);
        printf("Salary(Rs.):");
        fflush(stdin);
        scanf("%d",&e[i].salary);
    }
        //sorting based on salary
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(e[i].salary<e[j].salary){
            emp temp=e[i];
            e[i]=e[j];
            e[j]=temp;
        }
        }
    }
    printf("The stored details:\n");
    printf("EmpNo\tName\tSalary\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d\n",e[i].EmpNo,e[i].name,e[i].salary);
    }
}
int main(){
    int n;
    printf("How many emoloyees(N):");
    scanf("%d",&n);
    getdetails(n);
return 0;
}