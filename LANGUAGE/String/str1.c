#include<stdio.h>


main(){ char a[10];
     scanf("%s",a);
     printf("%s",a);
     fflush(stdin);
     printf("\n");
     scanf("%[^\n]",a);
     printf("%s",a);
}
