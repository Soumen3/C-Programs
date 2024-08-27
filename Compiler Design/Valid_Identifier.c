#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i, flag = 0;
    char keyw[16][10] = {"int", "float", "long", "double", "auto", "extern", "if", "else", "break", "char", "for", "switch", "while", "continue", "case", "void"};
    char a[10];
    printf("Enter a identifier:\t");
    gets(a);

    //    check for keyword
    for (i = 0; i < 16; i++)
    {
        if (strcmp(keyw[i], a) == 0)
            flag = 1;
    }

    if (flag == 1)
        printf("\n%s is a keyword", a);

    else
    {
        flag = 0;
        if (a[0] == '_' || isalpha(a[0]) != 0)
        {
            for (i = 1; a[i] != '\0'; i++)
            {
                if (isalnum(a[i]) ==0 && a[i] != '_')
                {
                    flag = 1;
                }
            }
        }
        else
            flag = 1;

        if (flag == 0)
            printf("\n%s is an identifier", a);
        else if (flag = 1)
            printf("\n%s is not an identifier", a);
    }
}
