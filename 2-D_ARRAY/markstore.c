#include<stdio.h>
void main()
{
    int r,c;
    //rows student name
    printf("total no. of student: ");
    scanf("%d",&r);
    printf("no of columns-->0.Roll no./1.physics/2.chemistry/3.mathematics: ");
    scanf("%d",&c);
    printf("Data entering foramt:(  rollno.  PHY_mark   CHE_mark  MATH_mark):\n");
    int arr[r][c];
    for(int i=0;i<r;i++)
{ fflush(stdin);
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
// printing stored data
printf("R P C M");
    for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
}