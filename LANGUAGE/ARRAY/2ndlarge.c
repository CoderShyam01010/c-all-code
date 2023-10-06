#include <stdio.h>
void main()
{
    int a[6], x = 5, i, j, k;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] + a[j] == x)
            printf("%d %d\n", a[i], a[j]);
        }
    }
}
/*#include<stdio.h>
void main(){
    int a[7]={5,4,8,3,1,4,5};
    int i,large=0,slarge=0;
    for(i=0;i<7;i++){
        if(a[i]>large) large=a[i];
    }
    for(i=0;i<7;i++){
        if(a[i]>slarge && a[i] != large) slarge=a[i];
    }
    printf("large=%d\nslarge=%d",large,slarge);
}*/