/*Design a user defined function ‘IsPrime’ that returns 1 if the number is prime else 0. 
Implement a C program to read the number and display the output in the calling program.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
int isprime(int num);
int main()
{
   int num, result;
   printf("Enter a number: ");
   scanf("%d", &num);
   result = isprime(num);
   if(result == 1)
      printf("%d is a prime number.", num);
   else
      printf("%d is not a prime number.", num);
   return 0;
}
int isprime(int num)
{
   int i;
   if(num <= 1)
      return 0;
   for(i=2; i<=num/2; i++)
   {
      if(num%i == 0)
         return 0;
   }
   return 1;
}
// OUTPUT:
// Enter a number: 33
// 33 is not a prime number.
// Enter a number: 11
// 11 is a prime number.