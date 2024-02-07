// // #include<stdio.h>
// // void main()
// // {
// //     printf("hello worldd");

// // }
// // #include <stdio.h>
 
// // int main() {
// //     int i;
// //     if (printf("0"))
// //         i = 3;
// //     else
// //         i = 5;
// //     printf("%d", i);
// //     return 0;
// // }
// // double foo (double); /* Line 1 */
 
// // int main()
// // {
 
// //     double da, db;
 
// //     // input da
 
// //     db = foo(da);
 
// // }
 
// // double foo(double a)
// // {
// //     return a;
// // }
// // #include <stdio.h>
 
// // #define EVEN 0
// // #define ODD 1
 
// // int main() {
// //     int i = 3;
// //     switch (i % 2) {
// //         case EVEN:
// //             printf("Even");
// //             break;
// //         case ODD:
// //             printf("Odd");
// //             break;
// //         default:
// //             printf("Default");
// //     }
// //     return 0;
// // }
// // #include <stdio.h>
 
// // int main()
// // {
// //     int arr[5];
// //     // Assume base address of arr is 2000 and size of integer is 32 bit
// //     printf("%u", arr + 1);
 
// //     return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     int c = 5, no = 10;
// //     do {
// //         no /= c;
// //     } while(c--);
  
// //     printf ("%dn", no);
// //     return 0;
// // }
// // #include<stdio.h>
 
// // void dynamic(int s)
// // {
// //     s++;
// //     printf("%d ", s);
// // }
 
// // int main()
// // {
// //     dynamic(2);
// //     dynamic(3);
// //     return 0;
// // // }
// // #include<stdio.h>
// // int  main()
// // {
// //    unsigned int x = -1;
// //    int y = ~0;
// //    if (x == y)
// //       printf("same");
// //    else
// //       printf("not same");
// //    return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     char a = 012;
 
// //     printf("%d", a);
 
// //     return 0;
// // }
// // #include <stdio.h>
 
// // int i;
 
// // int main() {
// //     if (i) {
// //         // Do nothing
// //     } else {
// //         printf("Else");
// //     }
// //     return 0;
// // }
// // #include <stdio.h>
// //  int incr(int);
// // // int main()
// // // {
// // //    float c = 5.0;
// // //    printf ("Temperature in Fahrenheit is %.2f", (9/5)*c + 32);
// // //    return 0;
// // // }
// // int incr(int i)
// // {
// //    static int count = 0;
// //    count = count + i;
// //    return (count);
// // }
// // int main()
// // {
// //    int i,j;
// //    for (i = 0; i <=4; i++)
// //       j = incr(i);
// // }
// // #include<stdio.h>
// // int main()
// // {
// //     char c = 125;
// //     c = c+10;
// //     printf("%d", c);
// //     return 0;
// // }
// // # include <stdio.h>
 
// // void print(int arr[])
// // {
// //    int n = sizeof(arr)/sizeof(arr[0]);
// //    int i;
// //    for (i = 0; i < n; i++)
// //       printf("%d ", arr[i]);
// // }
 
// // int main()
// // {
// //    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
// //    print(arr);
// //    return 0;
// // }
// // #include<stdio.h>
// // int main()
// // {
// //     int i;
// //     int arr[5] = {1};
// //     for (i = 0; i < 5; i++)
// //         printf("%d ", arr[i]);
// //     return 0;
// // }
// // #include "stdio.h"
// // int main()
// // {
// //  int a = 10;
// //  int b = 15;
 
// //  printf("=%d",(a+1),(b=a+2));
// //  printf(" %d=",b);
 
// //  return 0;
// // }
// // #include<stdio.h>
// // int main()
// // {
// //    int n;
// //    for (n = 9; n!=0; n--)
// //      printf("n = %d", n--);
// //    return 0;
// // }
// // # include <stdio.h>
// // int main()
// // {
// //    int i = 0;
// //    for (i=0; i<20; i++)
// //    {
// //      switch(i)
// //      {
// //        case 0:
// //          i += 5;
// //        case 1:
// //          i += 2;
// //        case 5:
// //          i += 5;
// //        default:
// //          i += 4;
// //          break;
// //      }
// //      printf("%d  ", i);
// //    }
// //    return 0;
// // }
// #include <stdio.h>
// #define PRINT(i, limit) do
//                         {
//                             if (i++ < limit)
//                             {
//                                 printf("Quiz\n");
//                                 continue;
//                             }
//                         }while(0);
 
// int main()
// {
//     int i = 0;
//     PRINT(i, 3);
//     return 0;
// }
// #include <stdio.h>
 
// int main()
// {
//     int i = 1024;
//     for (; i; i >>= 1)
//         printf("Quiz\n ");
//     return 0;
// }
#include<stdio.h>
int main()
{
    float x = 0.1;
    if ( x == 0.1 )
        printf("IF");
    else if (x == 0.1f)
        printf("ELSE IF");
    else
        printf("ELSE");
}