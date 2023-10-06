#include<stdio.h>
void main()
{int num;
while(1) {
  printf("Enter a positive number (0 to quit): ");
  scanf("%d", &num);
  if(num == 0) {
    break; // exit the loop
  }
  if(num < 0) {
    printf("Invalid input. ");
    continue; // skip the rest of the loop body for negative numbers
  }
  printf("The square of %d is %d.\n", num, num*num);
}
}