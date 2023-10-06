#include <stdio.h>
void main()
{
    int n, m, i, j, a, d;
    printf("enter how many rows you want: ");
    scanf("%d", &n);
    int nst=n-1;
    int nsp=1;
    for(i=1;i<=n+(n-1);i++){// if n=5 then 1st line star=9 ->n+(n-1);
        printf("*");        // if n=9 then 1st line star=17 ->n+(n-1);
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for(j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}