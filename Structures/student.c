/*Write a structure to store the roll no., name, age (between 12 to 15) and address of students (more than 10). Store the information of the students.
i.
Write a function to print the names of all the students having age 15.
ii.
Write another function to print the names of all the students having even roll no.
iii.
Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).*/
#include<stdio.h>
typedef struct student{
    int rollno;
    char name[30];
    int age;
    char address[100];
}std;
 void age15(std s[],int n){
    printf("Students having age 15:\n");
    for(int i=0;i<n;i++){
        if(s[i].age==15){
            printf("%s\n",s[i].name);
        }
    }
    return;
 }
 void evenrollno(std s[],int n){
    printf("Name of students having even roll no.:\n");
    for(int i=0;i<n;i++){
        if(s[i].rollno%2==0){
            printf("%s\n",s[i].name);
        }
    }
    return;
 }
void givedetails(std s[],int r,int n){
    printf("Detalis of searched students:\n");
    for(int i=0;i<n;i++){
        if(s[i].rollno==r){
        printf("Name:%s\n",s[i].name);
        printf("Roll no:%d\n",s[i].rollno);
        printf("Age:%d\n",s[i].age);
        printf("Address:%s\n",s[i].address);
        }
    }
}
int main(){
    int n;
    printf("Enter total no. of students:");
    scanf("%d",&n);
    std s[n];
    //reading details of students
    printf("Enter details of students:\n");
    for(int i=0;i<n;i++){
        printf("Name:");
        fflush(stdin);
        scanf("%[^\n]s",s[i].name);
        printf("Roll no:");
        fflush(stdin);
        scanf("%d",&s[i].rollno);
        printf("Age:");
        fflush(stdin);
        scanf("%d",&s[i].age);
        printf("Address:");
        fflush(stdin);
        scanf("%[^\n]s",s[i].address);
    }
    age15(s,n);
    evenrollno(s,n);
    int r;
    printf("Enter roll no. of students to be searched:");
    scanf("%d",&r);
    givedetails(s,r,n);
    return 0;
}