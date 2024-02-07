//wacp to print the pattern...
/*1
  1 3
  1 3 5
  1 3 5 7*/
  #include<stdio.h>
  void main(){
    int i ,j;
    for(i=1;i<=4;i++)
    {for(j=1;j<=i;j+2)
    {printf("%d",j);}
    printf("\n");}
  }