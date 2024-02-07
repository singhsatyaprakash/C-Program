#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the numbers of rows: ");
    scanf("%d",&n);
    int a;
    for(i=1;i<=n;i++){
        if(i%2!=0)
        a=1;//if odd start with 1..
     else a=0;//if even start with 0..
        for(j=1;j<=i;j++){
            printf("%d",a);
            if(a==1)
            a=0;
        else
        a=1;
        }
        printf("\n");}
    }
//ALTERNATE METHOD
// #include<stdio.h>
// void main(){
//     int i,j,n;
//     printf("enter the numbers of rows: ");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             if((i+j)%2==0||i==j)
//             printf("%d",1);
//         else printf("%d",0);
//         }
//         printf("\n");
//     }
//     }