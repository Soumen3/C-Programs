#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to check if the character is an operator
bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to return the precedence of the operator
int precedence(char ch) {
    if (ch == '+' || ch == '-') {
        return 1;
    } else if (ch == '*' || ch == '/') {
        return 2;
    }
    return 0;
}

// Function to convert infix expression to postfix
void infixToPostfix(char* infix, char* postfix) {
    char stack[MAX_SIZE];
    int top = -1;
    int i, j;
    stack[++top] = '('; // Push '(' onto the stack
    strcat(infix, ")"); // Append ')' to the end of infix expression

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(') {
            stack[++top] = infix[i];
        } else if (isdigit(infix[i]) || isalpha(infix[i])) {
            postfix[j++] = infix[i];
        } else if (isOperator(infix[i])) {
            while (isOperator(stack[top]) && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        } else if (infix[i] == ')') {
            while (stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            top--; // Pop '(' from the stack
        }
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
