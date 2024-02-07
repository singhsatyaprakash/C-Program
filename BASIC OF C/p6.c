// /*Design a User Defined Function (UDF) in C to evaluate the following series. Display the final result int the main program:
// a. 1/1! -2/3! + 3/5! - 4/7! + 5/9!....................up to N terms
// b. 1 + 2 + 4 + 7 + 11 + 16..............................up to N terms*/
#include<stdio.h>
int factorial(int b)
{int fact=1;
        for(int i=1;i<=b;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a=1,b=1;
    float suma=0;
    for(int i=1;i<=n;i++)
    {
        int d=a/factorial(b);
        suma=suma+d;
    }
    printf("sum of part A=%f",suma);
}
// #include<stdio.h>
// float series_a(int);
// // float series_b(int);
// int fact(int);
// int n;
// void main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     float suma=series_a(n);
//     // float sumb=series_b(n);
//     printf("sum of series A=%f",suma);
//     // printf("sum of series B=%f",sumb);
// }
// float series_a(int n){
//     int a=1,b=1;
//     float suma=0;
//     for(int i=1;i<=n;i++)
//     {
//       float d=a/fact(b);
//       a++;
//       b=b+2;
//       if(n%2==0)
//       {
//         suma=suma-d;
//       }
//       else
//       suma=suma+d;
//     }
// }
// int fact(int b)
// {
//    int fact=1;
//     for(int i=1;i<=b;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }
