// #include<stdio.h>
// #include<string.h>
// char*SS(char str[]){
//     char *tstr=str+strlen(str)-4;
//     return (tstr);
// }
// int main(){
// char str[]={"Litchees & Mangoes"};
// printf("%s",SS(str));
//     return 0;
// }



// #include<stdio.h>
// char*fun1(void){
//     char *str="west";
//     return (str+2);
// }
// char*fun2(void){
//     char *str="wiring";
//     return (str+2);
// }
// int main(){
// printf("%s%s",fun1(),fun2());    
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int *ptr[]={11,22,23,44};
// int i;
// for(i=4;i>1;i--){
//     printf("%d\t",ptr[4-i]);
// }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char s[]="Program\0ming is fun";
//     int i=0;
//     while(s[i]!='\0'){
//         putchar(s[i]);
//         i++;
//     }
//     printf("\n%d",i);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char str[]="Graphic";
//     printf("%c",str[5]);
//     printf("\n%s",str+2);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char name[20]="graphic";
//     puts(name+3);
//     puts("graphsc"+2);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char str1[20]="Hello";
//     char *str2;
//     str2=str1;
//     str2[4]='t';
//     *str1='O';
//     printf("%s",str1);
//     printf("\n%s",str2);
//     return 0;
// }

//  #include<stdio.h>
//  int main(){
//     char s1[]="Physics";
//     char *s2=s1;
//     s1[0]='m';
//     printf("%s",s1);
//     printf("\n%s",s2);
//     return 0;
//  }
