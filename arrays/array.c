#include<stdio.h>
int main()
{
  int n,Esum=0,Ecount=0,Osum=0,Ocount=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  int num[n];
  for(int i=0;i<n;i++){
    printf("Enter any integer: ");
    scanf("%d",&num[i]);
  }
  for(int i=0;i<n;i++){
    if(num[i]%2==0){
       Esum+=num[i];
       Ecount++;
    }
    else{
      Osum+=num[i];
      Ocount++;
    }
  }
  printf("The sum of even elements are: %d\n",Esum);  
  printf("The count of even elements are: %d\n",Ecount);
    printf("The sum of odd elements are: %d\n",Osum); 
     printf("The count of odd elements are: %d\n",Ocount);
  return 0;
}