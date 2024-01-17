// #include <stdio.h>
// int Change();
// int main()
// { int i;
// for(i=0;i<3;i++)
// printf("%d",Change()); 
// return 0; }
// int Change()
// { static int x=1;
// return(++x);
// }
// // output:234







// #include <stdio.h>
// char Fun(int);
// void main()
// {char alpha='C';
// printf("%c\n",Fun(alpha));
// }
// char Fun(int alpha)
// { return(alpha+2);
// }
// //ouput:E




// #include <stdio.h>
// int fun(int x);
// void main()
// { int x=4;
// printf(" %d", fun(x));
// }
// int fun(int x)
// { if (x==0)
// return 1;
// return(x*x+fun(x-1)); }
// // 31

// #include <stdio.h>
// void fun(int);
// int global=10;
// void main()
// {auto int x=10,i;
// for(i=1;i<3;i++)
// fun(x);
// }
// void fun(int x)
// {
// printf("%d %d\n",++x, ++global); }
// 11 11
// 11 12



// #include <stdio.h>
// void main()
// { int x=3;
// switch(x)
// {
// case 3: x++;
// case 2: x=x-2;
// case 1: x++;
// break;
// default: x++;
// }
// printf("\n%d",x++);
// }

// 3