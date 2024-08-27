#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    char str[]={"Hello, I am Soumen"};
    printf("Enter your name:\n");
    for(i=0; str[i]!="\0"; i++){
        if(str[i+1]=="\0"){
            i=0;
            printf("\n");
        }
        getch();
        printf("%c",str[i]);

    }
    return 0;
}
