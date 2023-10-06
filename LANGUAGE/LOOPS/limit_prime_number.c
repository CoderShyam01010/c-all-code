//write prime numbers upto limts
#include<stdio.h>
#include <stdio.h>

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are: ", limit);

    // Loop through numbers from 2 to limit
    for (int num = 2; num <= limit; num++) {
        int flag = 1;  // Assume the current number is prime

        // Check if the current number is divisible by any number from 2 to (num-1)
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
               flag= 0;  // If divisible, mark as not prime
                break;  // No need to check further, break out of the inner loop
            }
        }

        // If the current number is prime, print it
        if (flag == 1) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
