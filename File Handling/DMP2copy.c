/*Develop a C program to create a file and copy its contents to another file such that there is no
space between any of the words in the copied file. Display the content of the newly copied file
to the output screen.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp1,*fp2;
    fp1=fopen("Original.txt","w+");
    fp2=fopen("Copt.txt","w+");
    char str[500],ch;
    printf("Enter a string:");
    scanf("%[^\n]s",str);
if(fp1!=NULL && fp2!=NULL){
    fputs(str,fp1);
    rewind(fp1);
    while((ch=fgetc(fp1))!=EOF){
        if(isspace(ch)>0){
            continue;
        }
        else{
            fputc(ch,fp2);
        }
    }
    rewind(fp2);
    printf("Newly copied file without space:\n");
    while((ch=fgetc(fp2))!=EOF){
        printf("%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
}
return 0;
}
