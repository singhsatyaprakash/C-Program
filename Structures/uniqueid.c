/*Read details of N students of a class such as Std_Id, Name, Course and Marks in three subjects S1,S2 and S3 along with the Std_Id to be 
searched in the main program.Assume Std_Id is the unique field. Design a UDF to display the details along with the percentage marks to the 
console. Assume maximum marks 100 per subject. */
#include <stdio.h>

typedef struct marks {
    int subject1;
    int subject2;
    int subject3;
} m;

typedef struct students {
    int std_id;
    char name[50];
    char course[25];
    m marks;
    float pmarks;
} std;

void getsDetail(std *s, int n) {
    printf("Enter the details of students:\n");
    for (int i = 0; i < n; i++) {
        fflush(stdin);
        printf("Enter the student id: ");
        scanf("%d", &s[i].std_id);
        printf("Enter name of student: ");
        scanf("%[^\n]s", s[i].name);
        printf("Enter course of student: ");
        scanf("%[^\n]s", s[i].course);
        printf("MARKS:\n");
        printf("Subject1: ");
        scanf("%d", &s[i].marks.subject1);
        printf("Subject2: ");
        scanf("%d", &s[i].marks.subject2);
        printf("Subject3: ");
        scanf("%d", &s[i].marks.subject3);
        s[i].pmarks = (s[i].marks.subject1 + s[i].marks.subject2 + s[i].marks.subject3) / 3.0;
    }
}
void display(int id,std *students,int n){
    for (int i = 0; i < n; i++) {
        if (id == students[i].std_id) {
            printf("The details are:\n");
            printf("Std-ID: %d\n", students[i].std_id);
            printf("Name: %s\n", students[i].name);
            printf("Subject1: %d\n", students[i].marks.subject1);
            printf("Subject2: %d\n", students[i].marks.subject2);
            printf("Subject3: %d\n", students[i].marks.subject3);
            printf("Percentage Marks: %.2f%%\n", students[i].pmarks);
            break;
        }
    }
}

int main() {
    int n;
    printf("How many students: ");
    scanf("%d", &n);

    std students[n];

    getsDetail(students, n);//call by value

    int id;
    printf("Enter a student id to be searched: ");
    scanf("%d", &id);
    display(id,students,n);
    return 0;
}