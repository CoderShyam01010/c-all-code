#include<stdio.h>
void main(){
    /*1234321
      123 321
      12   21
      1     1*/
       int i, j, k, n, nst, nsp;
    printf("enter row number: ");
    scanf("%d", &n);
    nst = n;
    nsp = 1;
    for (i = 1; i < n; i++)
    {
        int a = 1;
        for (k = 1; k <= nst; k++)
        {
            printf("%d",a);
            a++;
        }
        for (j = 1; j <= nsp; j++)
        {
            printf(" ");
        }

        a=a-2;

        for (k = 1; k < nst; k++)
        {
            printf("%d", a);
            a--;
        }
    nst--;
    nsp += 2;
    printf("\n");
    }
}