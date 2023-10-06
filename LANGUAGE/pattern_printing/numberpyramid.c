#include <stdio.h>
/*1234567
  123 567
  12    67
  1      7*/
int main()
{
    int i, j, k, n, nst, nsp;
    printf("enter row number: ");
    scanf("%d", &n);
    nst = n;
    nsp = 1;
    for (i = 1; i < 2 * n; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    for (i = 1; i < n; i++)
    {
        int a = 1;
        for (k = 1; k < nst; k++)
        {
            printf("%d", a);
            a++;
        }
        for (j = 1; j <= nsp; j++)
        {
            printf(" ");
            a++;
        }
        for (k = 1; k < nst; k++)
        {
            printf("%d", a);
            a++;
        }
          nst--;
    nsp += 2;
    printf("\n");
    }
  

    return 0;
}