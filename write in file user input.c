#include<stdio.h>
#include<string.h>

void main(){
    char s1[100];
    FILE *fp;

    printf("Enter a string:\n");
    gets(s1);

    fp=fopen("file1.txt","w");
    if (fp==NULL){
        printf("File is not found!");
        exit(0);
    }
    for (int i=0; i<strlen(s1); i++)
        fputc(s1[i],fp);
    fclose(fp);
    printf("Your string is inserted");
}

