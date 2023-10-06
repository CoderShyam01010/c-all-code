#include<stdio.h>
char * mystrcat(char * to, char *from){
	int i=0,j=0;
	while(to[i]!='\0')
	     i++;
	     
	while(from[j]!='\0'){ 
	     to[i] = from[j];
	     i++;j++;	}
	     to[i]=from[j];
	     return to; }

int main(){ char a[15], b[10], c[20];
        scanf("%s",a);
        scanf("%s",b);
        mystrcat(a,b);
        scanf("%s",c);
        printf("%s\n",a);
        printf("%s",mystrcat(c,a));
        printf("\n%s",c);
	}

