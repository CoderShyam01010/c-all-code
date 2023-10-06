#include<stdio.h>
#include<string.h>

main(){ char a[10], b[10], c[10];
        scanf("%s",b);
        strcpy(a,b);
        printf("%s\n",a);
        printf("%s",strcpy(c,a));
        printf("\n%s",c);}

