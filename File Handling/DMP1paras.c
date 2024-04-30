/*Write a C program to create a file ThreeParas.txt and write any three paragraphs of text to it. Display the content of the file and the count of frequency of consonants and vowels present in it to the console. 
Note: You may assume a single paragraph in the input stream until you encounter a newline character ( \n).
Name-Satya Prakash Singh
Roll No-60
Section-B1
Course-B.Tech
Branch:C.S.E
*/
#include<stdio.h>
int main(){
    char ch,str[3][100];
    int vcount=0,ccount=0;
    FILE *fp=fopen("ThreeParas.txt","w+");
    printf("Enter string:\n");
    for(int i=0;i<3;i++){
        fgets(str[i],100,stdin);
    }
    if(fp!=NULL){
    for(int i=0;i<3;i++){
         fputs(str[i],fp);
    }
    rewind(fp);
        while((ch=fgetc(fp))!=EOF){
        if((ch>='A'&& ch<='Z')||(ch>='a' && ch<='z') ){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                vcount++;
            }
            else{
                ccount++;
            }
        }
        }
    rewind(fp);
    printf("\nFile: ThreeParas.txt :\n");
          while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
    }
    printf("Vowels: %d",vcount);
    printf("\nConsonent: %d",ccount);
    return 0;
}
