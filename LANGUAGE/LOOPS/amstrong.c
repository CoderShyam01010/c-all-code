//find amstrong number from 100 to 1000
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result;

    printf("Armstrong numbers from 100 to 1000 are:\n");

    for (num = 100; num <= 1000; num++) {
        originalNum = num;
        result = 0;

        // Calculate the sum of cubes of digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }

        // If the sum of cubes of digits is equal to the number itself, it's an Armstrong number
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
