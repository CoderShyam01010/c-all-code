#include<stdio.h>

int mystrlen(char * str) { int i;
	for(i=0; str[i]!='\0';i++); 
	return i;
}


main(){ char a[15];
        scanf("%[^\n]",a);
        printf("%s has %d characters",a,mystrlen(a));
        }

