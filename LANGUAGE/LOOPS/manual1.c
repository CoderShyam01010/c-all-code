#include <stdio.h>

int main() {
    int i = 1;

    printf("Loop with post-increment:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        i = i + 2; // modifying i inside the loop body
    }
    printf("\n");

    i = 1; // reset i to 1

    printf("Loop with pre-increment:\n");
    for (i = 1; i <= 10; ++i) {
        printf("%d ", i);
        i = i + 2; // modifying i inside the loop body
    }
    printf("\n");

    return 0;
}
