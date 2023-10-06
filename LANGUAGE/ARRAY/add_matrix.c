#include<stdio.h>
void main(){
    int a[3][4],i,j,b[3][4],c[3][4];
    printf("Enter matrix a\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix A is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter matrix b :\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix B is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of the matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
