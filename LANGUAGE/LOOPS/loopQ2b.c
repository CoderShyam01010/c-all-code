#include<stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    printf("Enter limit of series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        c=a+b;
        a=b;
        b=c;
        if(a%2 !=0)
        printf("%d\n",a);
    
    }
}