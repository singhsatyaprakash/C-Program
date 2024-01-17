/*Design a user defined function to find and print all the perfect numbers between given interval m to n.
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
void findPerfectNumbers(int m, int n);
int main()
{
   int m, n;
   printf("Enter the interval (m and n): ");
   scanf("%d %d", &m, &n);
   printf("Perfect numbers between %d and %d are: ", m, n);
   findPerfectNumbers(m, n);
   return 0;
}
void findPerfectNumbers(int m, int n)
{
   int i, j, sum;
   for(i=m; i<=n; i++)
   {
      sum = 0;
      for(j=1; j<i; j++)
      {
         if(i%j == 0)
            sum += j;
      }
      if(sum == i)
         printf("%d ", i);
   }
}
// OUTPUT:
// Enter the interval (m and n): 12 50
// Perfect numbers between 12 and 50 are: 28