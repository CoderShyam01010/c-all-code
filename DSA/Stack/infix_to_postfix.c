#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STACK_SIZE 100
typedef struct {
    char data[STACK_SIZE];
    int top;
} Stack;
void push(Stack *stack, char c) {
    if (stack->top < STACK_SIZE - 1) {
        stack->data[++stack->top] = c;
    } else {
        printf("Stack overflow!\n");
        exit(1);
    }
}
char pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    } else {
        printf("Stack underflow!\n");
        exit(1);
    }
}
int precedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}
void infixToPostfix(const char *infix, char *postfix) {
    Stack stack;
    stack.top = -1;
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        char token = infix[i];
        if (isalnum(token)) {
            postfix[j++] = token;
        } else if (token == '(') {
            push(&stack, token);
        } else if (token == ')') {
            while (stack.top >= 0 && stack.data[stack.top] != '(') {
                postfix[j++] = pop(&stack);
            }
            if (stack.top >= 0 && stack.data[stack.top] == '(') {
                pop(&stack);
            } else {
                printf("Invalid expression: Unmatched parentheses!\n");
                exit(1);
            }
        } else {
            while (stack.top >= 0 && precedence(token) <= precedence(stack.data[stack.top])) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, token);
        }
        i++;
    }
    while (stack.top >= 0) {
        if (stack.data[stack.top] == '(') {
            printf("Invalid expression: Unmatched parentheses!\n");
            exit(1);
        }
        postfix[j++] = pop(&stack);
    }
    postfix[j] = '\0';
}
int main() {
    char infix[STACK_SIZE];
    char postfix[STACK_SIZE];
    printf("Enter an infix expression: ");
    fgets(infix, STACK_SIZE, stdin);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}