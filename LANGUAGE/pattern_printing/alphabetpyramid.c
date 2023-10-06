#include <stdio.h>
void main()
{
    /*ABCDEFG      A=65
      ABC EFG
      AB   FG
      A     G*/
    int n;
    printf("enter row number: ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int i = 65; i < (2 * n - 1) + 65; i++)
    {
        printf("%c", i);
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        int A = 65;
        for (int j = 1; j < nst; j++)
        {
            printf("%c", A);
            A++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            A++;
        }
        for (int j = 1; j < nst; j++)
        {
            printf("%c",A);
            A++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
}