#include <stdio.h>
void main()
{
    int n, m, i, j, a, d;
    printf("enter how many rows you want: ");
    scanf("%d", &n);
    int nst = 1;
    int nsp = n/2;
    int middle_line = n / 2 + 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        if (i < middle_line)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nst -= 2;
            nsp++;
        }
        printf("\n");
    }
}
