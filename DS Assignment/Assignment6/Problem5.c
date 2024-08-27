#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100

int evaluatePostfix(char* exp) {
    int stack[MAX_SIZE];
    int top = -1;

    for (int i = 0; exp[i]; ++i) {
        if (isdigit(exp[i])) {
            stack[++top] = exp[i] - '0';
        } else {
            int val1 = stack[top--];
            int val2 = stack[top--];
            switch (exp[i]) {
                case '+': stack[++top] = val2 + val1; break;
                case '-': stack[++top] = val2 - val1; break;
                case '*': stack[++top] = val2 * val1; break;
                case '/': stack[++top] = val2 / val1; break;
            }
        }
    }
    return stack[top];
}

int main() {
    char exp[MAX_SIZE];

    printf("Enter a postfix expression: ");
    fgets(exp, MAX_SIZE, stdin);

    // Remove the newline character
    exp[strcspn(exp, "\n")] = 0;

    int eval_result = evaluatePostfix(exp);
    printf("Result: %d\n", eval_result);

    return 0;
}
