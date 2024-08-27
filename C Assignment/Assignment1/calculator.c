#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputString[30];

    // Input a string
    printf("Enter the equation: ");
    scanf("%s", inputString);

    char *rightOperand;
    char symbol;

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        if (inputString[i] == '+' || inputString[i] == '-' || inputString[i] == '*' || inputString[i] == '/')
        {
            symbol = inputString[i];

            rightOperand = (&inputString[i] + 1);
            inputString[i] = '\0';
        }
    }
    //    printf("The symbol is %c\n", symbol);

    // Convert string to integer using atoi function
    int integerValue2 = atoi(rightOperand);

    // Print the converted integer
    //    printf("Right Operand: %d\n", integerValue2);

    // Convert string to integer using atoi function
    int integerValue1 = atoi(inputString);

    // Print the converted integer
    //    printf("Left Operand: %d\n", integerValue1);

    switch (symbol)
    {
    case '+':
        printf("%d + %d = %d", integerValue1, integerValue2, integerValue1 + integerValue2);
        break;
    case '-':
        printf("%d - %d = %d", integerValue1, integerValue2, integerValue1 - integerValue2);
        break;
    case '*':
        printf("%d * %d = %d", integerValue1, integerValue2, integerValue1 * integerValue2);
        break;
    case '/':
        printf("%d / %d = %d", integerValue1, integerValue2, integerValue1 / integerValue2);
    }

    return 0;
}
