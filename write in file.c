#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    char s[]="Hello Everyone, I am Soumen";
    fp=fopen("f1.txt","w");
    if(fp==NULL){
        printf("File not open");
        exit(1);
    }
    for (int i=0; i<strlen(s); i++){
        fputc(s[i],fp);
    }
    fclose(fp);
    printf("The data is inserted");
}
