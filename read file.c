#include<stdio.h>

void main(){
    FILE *fp;
    fp=fopen("file1.txt","r");
    if (fp==NULL){
        printf("file is not found !");
        exit(0);
    }
    char ch;
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}
