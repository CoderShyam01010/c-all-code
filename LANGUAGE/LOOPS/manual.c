//1
//12
//123
//1234
#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter row number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}