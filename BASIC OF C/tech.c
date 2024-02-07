#include<stdio.h>
void main(){
   int n;
    printf("Enter the number of characters: ");
    scanf("%d",&n);
    char num[n];
      printf("Enter any character: ");
    for(int i=0;i<n;i++){  
         fflush(stdin);
        scanf("%c",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]>='a' && num[i]<='z'){
            num[i]-=32;
        }
       else if(num[i]>='A' && num[i]<='Z'){
            num[i]+=32;
        }
        
        
    }
     for(int i=0;i<n;i++){
        printf("%c ",num[i]);
    }
}