// #include<stdio.h>
// void main(){
//     printf("Hello world");
// }
// # include <stdio.h>
// void fun(int *ptr)
// {
//     *ptr = 30;
// }

// int main()
// {
// int y = 20;
// fun(&y);
// printf("%d", y);

// return 0;
// }
// #include <stdio.h> 
// int main()
// {
//     int *ptr;
//     int x;
 
//     ptr = &x;
//     *ptr = 0;
 
//     printf(" x = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);
 
//     *ptr += 5;
//     printf(" x  = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);
 
//     (*ptr)++;
//     printf(" x = %d\n", x);
//     printf(" *ptr = %d\n", *ptr);
 
//     return 0;
// }
// #include <stdio.h>
//     void foo(int*);
//     int main()
//     {
//         int i = 10, *p = &i;
//         foo(p++);
//     }
//     void foo(int *p)
//     {
//         printf("%d\n", *p);
//     }
// // // // #include <stdio.h>
// // int main()
// {
// int i = 97, *p = &i;
// foo(&i);
// printf("%d ", *p);
// }
// void foo(int *p)
// {
// int j = 2;
// p = &j;
// printf("%d ", *p);
// }
// int main()
// {
//     char str[]={'g','l','o','b','e'};
//     printf("%s",str);
//     return 0;
// }
// int main()
// {
//     char str1[]="JOHN";
//     char str2[20];
//     str2= str1;
//     printf("%s",str2);
//     return 0;
// }
// int main()
// {
//     char country[]="BRAZIL";
//     char *ptr;
//     ptr=country;
//     while(*ptr != '\0')
//     {
//         printf("%c", *ptr);
//         ptr++;
//     }
//     return 0;
// }
//  int main()
// {
//     char str1[]="JAMES,";
//     char str2[15]="BOND ";
//     strcat(str2,str1);
//     printf("%s",str2);
//     printf("%s",str1);
// }
// int main()
// {
//     printf("%c","HUMPTY"[2]);
// }
// #include<stdio.h>
// int main()
// {
//     float a = 0.1;
//     float *x=&a;  
//     if ( *x == 0.1 )
//         printf("IF");
//     else if (*x == 0.1f)
//         printf("ELSE IF");
//     else
//         printf("ELSE");
//     return 0;
// } 
// #include <stdio.h>

// int main()

// {

//     // char str[] = "%d %c", arr[] = "GeeksQuiz";

//     // printf(str, 0[arr], 2[arr + 3]);

//     // return 0;
//     char p[20];

// char *s = "string";

// int length = strlen(s);

// int i;

// for (i = 0; i < length; i++)

//     p[i] = s[length — i];

// printf("%s", p);

// // }
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char p[20];

// char *s ="string";

// int length = strlen(s);

// int i;

// for(i=0; i <length; i++)

//     p[i] = s[length- i];

// printf("%s", p);
// }
// #include<stdio.h>
// int main()
// {
//     char str[]={'g','l','o','b','e'};
//     printf("%s",str);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// void main(){
//     int n;
//     scanf("%d",&n);
//     char a[100][100];
//     int i,j;

//     for(i=0;i<n;i++){
//         scanf("%s",a[i]);
//     }

//     for(i=0;i<n;i++){
//         if(i%2==0){
//             for(j=0;j<strlen(a[i]);j++){
//                 if(a[i][j]>=97 && a[i][j]<=122){
//                     a[i][j] = a[i][j] - 32; 
//                 }
//             }
//         }
//     }

//     for(i=0;i<n;i++){
//         printf("%s ",a[i]);
//         }
// }