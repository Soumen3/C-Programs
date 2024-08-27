#include<stdio.h>
#include<ctype.h>

void main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if(isalpha(c))
        printf("This is an alphabet");
    else
        printf("This is not an alphabet");
}

