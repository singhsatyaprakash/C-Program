/*Write a C program to read a number from the keyboard and check whether it is palindrome or not.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
int main()
{
   int num,product=0,d,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);
   temp = num;
   while(num != 0)
   {
      d = num % 10;
      product = product*10 + d;
      num /= 10;
   }
   if(temp == product)
      printf("%d is a palindrome number.", temp);
   else
      printf("%d is not a palindrome number.",temp);
   return 0;
}

// OUTPUT:
// Enter an integer: 1234321
// 1234321 is a palindrome number.
// Enter an integer: 12345
// 12345 is not a palindrome number.