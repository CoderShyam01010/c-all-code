//print 1 to n
#include<stdio.h>
void increasing(int x,int n){
    if(x==n+1) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}