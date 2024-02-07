/*Develop a user defined function to evaluate the following series:
1 - 1/2*2 + 1/3*3 – 1/4*4………. upto n terms
Name-Satya prakash singh
Roll no.-58
Section-B1
Course-B.Tech
Branch-C.S.E
*/
#include<stdio.h>
#include<math.h>
float evaluateSeries(int n);
int main()
{
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);
   printf("The sum of the series up to %d terms is: %.2f", n, evaluateSeries(n));
   return 0;
}
float evaluateSeries(int n)
{
   float sum = 0;

   for(int i=1; i<=n; i++)
   {
      if(i%2 == 0)
         sum -= pow((float)1/i, i);
      else
         sum += pow((float)1/i, i);
   }
   return sum;
}
