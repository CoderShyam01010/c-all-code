//write prime numbers upto limts
#include<stdio.h>
#include <stdio.h>

int main() {
    int num,flag=0;
    printf("Enter the number: ");
    scanf("%d", &num);

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
               flag= 1;  // If divisible, mark as not prime
                break;  // No need to check further, break out of the inner loop
            }
        }
        

        // If the current number is prime, print it
        if ( flag == 1) {
            printf("composite");
        }else{
            printf("prime");
        }
    

    printf("\n");

    return 0;
}
