//swap rows of a 3*2 matrix
#include<stdio.h>
int main(){
    int a[2][3];
    int temp;
    printf("enter array elements: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
  for (int i = 0; i < 1; i++) {
    for(int j=0;j<3;j++){
         temp = a[i][j];
        a[i][j] = a[i+1][j];
        a[i+1][j] = temp;
    }
  }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
     printf("\n");
    }
    return 0;
}