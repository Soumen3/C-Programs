#include<stdio.h>

void main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    ch=tolower(ch);
    if(ch>='a' && ch<='z')
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            printf("This is a vowel");
        else
            printf("This is a consonant");
    else
        printf("Invalid input");
}

