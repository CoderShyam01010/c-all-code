#include<stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    printf("Enter limit of series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    
    }
}