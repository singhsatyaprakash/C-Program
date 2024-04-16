/*Develop a C program to read the attributes of an item from the user such as ItemCode, ItemName, Quantity and Rate. Implement a C program using a structure to find the total cost of the inventory of storing N items in the stock.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<string.h>
 typedef struct inventory{
    char item_name[100];
    float unit_Price;
    int quantity;
}inv;
float getdetails(int n){
    inv item[n];
    float amount=0;
    printf("Enter details of items:\n");
    for(int i=0;i<n;i++){
        fflush(stdin);
        printf("Item name:");
        gets(item[i].item_name);
        printf("Unit Price(Rs.):");
        scanf("%f",&item[i].unit_Price);
        printf("Quantity(No.):");
        scanf("%d",&item[i].quantity);
        amount+=item[i].unit_Price*item[i].quantity;
    }
    return amount;
}
int main(){
    int n;
    printf("how many items:");
    scanf("%d",&n);
    float total=getdetails(n);
    printf("Total cost of the inventory(Rs.):%.2f",total);
    return 0;
}