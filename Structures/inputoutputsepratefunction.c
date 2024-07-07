#include <stdio.h>

typedef struct employee {
  char name[30];
  int age;
  float basic_salary;
  float total_salary;
} employee;

void output(employee emp[], int n) {
  for (int i = 0; i < n; i++) {
    printf("\nName: %s", emp[i].name);
    printf("\nAge: %d", emp[i].age);
    printf("\nTotal Salary: %0.2f", emp[i].total_salary);
  }
}

void input(employee emp[], int n) {
  for (int i = 0; i < n; i++) {
    printf("Name: ");
    scanf("%s", emp[i].name);
    printf("Age: ");
    scanf("%d", &emp[i].age);
    printf("Basic salary: ");
    scanf("%f", &emp[i].basic_salary);
    float hra = 0.05 * emp[i].basic_salary;
    float da = 0.1 * emp[i].basic_salary;
    emp[i].total_salary = hra + da + emp[i].basic_salary;
  }
}

int main() {
  int n;
  printf("How many employees: ");
  scanf("%d", &n);
  employee emp[n];
  input(emp, n);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (emp[i].total_salary > emp[j].total_salary) {
        float temp = emp[i].total_salary;
        emp[i].total_salary = emp[j].total_salary;
        emp[j].total_salary = temp;
      }
    }
  }
  output(emp, n);
}
