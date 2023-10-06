#include <stdio.h>

int isFibonacci(int n) {
    int a = 0;
    int b = 1;
    int c = a + b;
    while (c <= n) {
        if (c == n) {
            return 1; // n is a Fibonacci number
        }
        a = b;
        b = c;
        c = a + b;
    }
    return 0; // n is not a Fibonacci number
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Non-Fibonacci numbers up to %d:\n", limit);
    for (int i = 1; i <= limit; i++) {
        if (!isFibonacci(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
