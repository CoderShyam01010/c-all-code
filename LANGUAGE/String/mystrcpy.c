#include<stdio.h>
char * mystrcpy(char * to, char * from){
	int i = 0;
	while(from[i] != '\0'){ to[i] = from[i];
	      i++;}
	      to[i]='\0';
	      return to;
}

main(){ char a[10], b[10], c[10];
        scanf("%s",b);
        mystrcpy(a,b);
        printf("%s\n",a);
        printf("%s",mystrcpy(c,a));
        printf("\n%s",c);}

