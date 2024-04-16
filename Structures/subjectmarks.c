/*Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
#include<stdio.h>
struct student{
    int roll_no;
    char names[25];
    int chem_marks;
    int math_marks;
    int phy_marks;
    float percentage_marks;
};
int main(){
    int n;
    float sum,percentage;
    printf("How many stduent:");
    scanf("%d",&n);
    struct student std[n];
    printf("ENTER THE DATA OF STUDENTS\n");
    for(int i=0;i<n;i++){
        printf("Roll no:");
        scanf("%d",&std[i].roll_no);
        printf("Name of student:");
        fflush(stdin);
        scanf("%[^\n]s",std[i].names);
        printf("SUBJECT MARKS:\n");
        printf("Chemistry:");
        scanf("%d",&std[i].chem_marks);
        printf("Mathematics:");
        scanf("%d",&std[i].math_marks);
        printf("Physics:");
        scanf("%d",&std[i].phy_marks);
        printf("-----------\n");
        sum=std[i].chem_marks+std[i].phy_marks+std[i].math_marks;
        percentage=sum/3;
        std[i].percentage_marks=percentage;
        }
        //printing percentage of each student ..
        for(int i=0;i<n;i++){
            printf("%d\t%s\t%0.2f%\n",std[i].roll_no,std[i].names,std[i].percentage_marks);
        }
}