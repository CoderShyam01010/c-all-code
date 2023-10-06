#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack* stack) {
    stack->top = -1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack* stack, char element) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->data[++stack->top] = element;
}

char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack->data[stack->top--];
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    return 0;
}

void infixToPrefix(char infix[], char prefix[]) {
    Stack stack;
    initialize(&stack);
    int infixLength = strlen(infix);
    int j = 0;

    for (int i = infixLength - 1; i >= 0; i--) {
        if (isalnum(infix[i])) {
            prefix[j++] = infix[i];
        } else if (infix[i] == ')' || isOperator(infix[i])) {
            push(&stack, infix[i]);
        } else if (infix[i] == '(') {
            while (!isEmpty(&stack) && stack.data[stack.top] != ')') {
                prefix[j++] = pop(&stack);
            }
            if (!isEmpty(&stack) && stack.data[stack.top] != ')') {
                printf("Invalid infix expression\n");
                return;
            } else {
                pop(&stack); // Discard the ')'
            }
        }
    }

    while (!isEmpty(&stack)) {
        if (stack.data[stack.top] == ')' || stack.data[stack.top] == '(') {
            printf("Invalid infix expression\n");
            return;
        }
        prefix[j++] = pop(&stack);
    }

    prefix[j] = '\0';

    // Reverse the prefix expression
    int prefixLength = strlen(prefix);
    for (int i = 0; i < prefixLength / 2; i++) {
        char temp = prefix[i];
        prefix[i] = prefix[prefixLength - i - 1];
        prefix[prefixLength - i - 1] = temp;
    }
}

int main() {
    char infix[MAX_SIZE], prefix[MAX_SIZE];

    printf("Enter the infix expression: ");
    scanf("%[^\n]s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}
