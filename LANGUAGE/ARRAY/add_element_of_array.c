#include<stdio.h>
void main()
{
    int a[5],sum=0,i;
    printf("enter array: ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
}
printf("your array elements are:%d",a[i]);
for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
printf("sum is %d",sum);
}
