#include <stdio.h>
void main()
{
    int a, s=0,i,k=1;
    printf("enter limit:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+i*k;
        k=k*(-1);
    }
    printf("%d",s);
}