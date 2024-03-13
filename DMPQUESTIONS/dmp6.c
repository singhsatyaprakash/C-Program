/*
Design a UDF that returns the count of special characters present in a sentence passed to it using pointer to the calling program. Implement a C program to read a string in the main program and display all the count of the special characters returned by the function to the console.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
Sample Input:
Enter a String: Rotation%# is$? ?rotating $motion?
Output:
Special Character Count: 9
*/#include <stdio.h>

int countSep(char *str) {
    int count = 0;
    while (*str != '\0') {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')||*str==' ') {
            str++;
        } else {
            count++;
            str++;
        }
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int total = countSep(str);
    printf("Special Character Count: %d\n", total);
    return 0;
}















// #include<stdio.h>
// int countSep(char str[]){
//     int *cptr=str;
//     int i=0,count=0;
//     while(str[i]!='\0'){
//         if(*(cptr+i)>='a' && *(cptr+i)<='z'|| *(cptr+i)>='A' && *(cptr+i)<='Z' ){
//             i++;
//             continue;
//     }
//     else{
//         count++;
//         i++;
//     }
//     // if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&& str[i]<='Z'){
//     //     i++;
//     //     continue;
//     // }
//     // else{
//     //     count++;
//     //     i++;
//     // }

//     }
//     return count;
// }
    
// int main(){
//     char str[100];
//     printf("Enter a string:");
//     scanf("%[^\n]s",str);
//     int total=countSep(str);
//     printf("Special Character Count:%d",total);
//     return 0;
// }