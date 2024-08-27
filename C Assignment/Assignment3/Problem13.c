#include<stdio.h>

void main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(isalpha(ch))
        printf("This is an alphabet");
    else if(isdigit(ch))
        printf("This is a number");
    else
        printf("This is a special character");
}

