// //converting binary into decimal...
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//      int num,sum=0,s,f,d,i=0;
//     printf("Enter the num :");
//     scanf("%d",&num);
//     while(num>0)
//     {
//         d=num%10;
//         f=pow(2,i++);
//         s=d*f;
//         num=num/10;
//         sum=sum+s;
//     }
//     printf("Binary(%d)=decimal(%d)",num,sum);
// }



#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, s, d, i = 0;

    printf("Enter the num: ");
    scanf("%d", &num);

    while (num > 0) {
        d = num % 10;
        s = d * pow(2, i++);
        num = num / 10;
        sum = sum + s;
    }

    printf("Binary = %d, Decimal = %d\n", num, sum);

    return 0;
}
