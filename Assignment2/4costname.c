/*Develop a C program to read N names of people from the user. Assume the cost of storing the names is Rs. 2/- character excluding the space. Implement using pointers to find the total cost of storage in Rupee based on their length of characters to the console.*/
#include<stdio.h>
#include<string.h>
int length(char str[]){
    int i=0,j=0;
    char *ptr=&str[0];
    while(*(str+i)!='\0'){
        if(*(str+i)!=' '){
            j++;
        }
        i++;
    }
    return (j);
}
void main(){
    int n,Tcost=0;
    printf("How many names: ");
    scanf("%d",&n);
    char str[n][50];
    for(int i=0;i<n;i++){
        fflush(stdin);
        gets(str[i]);
    }
    for(int i=0;i<n;i++){
        int len=length(str[i]);
           Tcost+=len*2;  
    }
          printf("Toatl Cost of storage is Rs. %d",Tcost);
}

/*
How many names: 3
Deepak Kamboj
Satya Prakash Singh
Anjali Bhatt
Toatl Cost of storage is Rs. 80

How many names: 5
Khushi Rawat
Aarushi Rawat
Riya Rai
Deepali Chauhan
Deepshikha  
Toatl Cost of storage is Rs. 108
*/