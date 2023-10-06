#include<stdio.h>
void main()
{
    int a=2,count,i;
    printf("enter how many prime number you want:");
    scanf("%d",&count);
    while(count)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            break;
        }
        if(a==i)
        {
            printf("%d\n",a);
            count--;
        }
        a++;
    }
}
