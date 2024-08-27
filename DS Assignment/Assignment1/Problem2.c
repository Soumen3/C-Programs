#include<stdio.h>
#include<string.h>

void main(){
    printf("Enter the string:\t");
    char str[20], copy_str[20];
    gets(str);
    strcpy(copy_str,str);

    if(strcmp(copy_str,strrev(str))==0)
        printf("The given string is palindrome");
    else
        printf("The given string is not palindrome");
}
