#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    char str[]={"Hello, I am Soumen"};
    printf("Enter your name:\n");
    for(i=0; str[i]!='\0'; i++){

        getch();
        printf("%c",str[i]);
        if(str[i+1]=='\0'){
            i=-1;
            printf("\n");
        }
    }
    return 0;
}
