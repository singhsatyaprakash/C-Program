/*Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
i.
Write a function to print the names of all the customers having balance less than $200.
ii.
Write a function to add $100 in the balance of all the customers having more than
$1000 in their balance and then print the incremented value of their balance.*/
#include<stdio.h>
 typedef struct customer{
    char name[50];
    long account_number;
    float balance;
}cust;
void lessbalance(cust c[],int n){
    printf("Customers having a balance less than $200 are:\n");
    for(int i=0;i<n;i++){
        if(c[i].balance<200){
            printf("%s\n",c[i].name);
        }
    }
}
void incrementbalance(cust c[],int n){
    printf("Customers who got increment:\n");
    printf("Name\tBalance\n");
    for(int i=0;i<n;i++){
        if(c[i].balance>1000){
            c[i].balance+=100;
            printf("%s\t$%.2f\n",c[i].name,c[i].balance);
        }
    }
}
int main(){
    int n;
    printf("How many customers:");
    scanf("%d",&n);
    cust c[n];
    for(int i=0;i<n;i++){
        printf("Enter customer name:");
        fflush(stdin);
        scanf("%[^\n]s",c[i].name);
        printf("Enter account number:");
        fflush(stdin);
        scanf("%ld",&c[i].account_number);
        printf("Enter balance of customer:");
        fflush(stdin);
        scanf("%f",&c[i].balance);
    }
    lessbalance(c,n);
    incrementbalance(c,n);
    return 0;
}