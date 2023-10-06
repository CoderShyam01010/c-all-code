#include<stdio.h>
void add(int a,int b){
	printf("%d",a+b);
}
void sub(int a,int b){
	printf("%d",a-b);
}
void mul(int a,int b){
	printf("%d",a*b);
}
void div(int a,int b){
	printf("%d",a/b);
}
void main(){
	int a,b,ch;
	void((*r[])(int,int))={add,sub,mul,div};
	printf("enter choice:\n");
	scanf("%d",&ch);
	printf("enter number a and b:\n");
	scanf("%d\n%d",&a,&b);
	(*r[ch])(a,b);
}