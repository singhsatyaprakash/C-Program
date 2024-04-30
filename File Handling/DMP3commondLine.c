/*Implement a C program to read 20 integers through command line arguments and store them
into a file Numbers.txt in the current working path. Then read the file Numbers.txt and separate
them into two different files odd.txt and even.txt such that odd numbers are copied to odd.txt
and even numbers are copied to even.txt files respectively in the same current working path.
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("Numbers.txt","w+");
    fp2=fopen("even.txt","w+");
    fp3=fopen("odd.txt","w+");
    if(fp1!=NULL && fp2!=NULL && fp3!=NULL ){
        for(int i=1;i<argc;i++){
            int num=atoi(argv[i]);
            fputc(num,fp1);
            if(num%2==0){
                fputc(num,fp2);
            }
            else{
                fputc(num,fp3);
            }
        }
        rewind(fp1);
        rewind(fp2);
        rewind(fp3);
        int chr;
        printf("\nNumber Text:");
        while((chr=fgetc(fp1))!=EOF){
            printf("%d ",chr);
        }
        printf("\nEven Text:");
        while((chr=fgetc(fp2))!=EOF){
            printf("%d ",chr);
        }
        printf("\nOdd Text:");
        while((chr=fgetc(fp3))!=EOF){
            printf("%d ",chr);
        }
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    }
    return 0;
}