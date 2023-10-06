#include<stdio.h>

int mystrcmp(char* s1, char *s2)
{ int i=0;
while(s1[i]!='\0' && s2[i]!= '\0') i++;
   return(s1[i]-s2[i]); }
main(){ char a[15],b[15];
        scanf("%[^\n]",a);
        fflush(stdin);
        scanf("%[^\n]",b);
        mystrcmp(a,b)?printf("Strings not same"):printf("Strings same");
}
