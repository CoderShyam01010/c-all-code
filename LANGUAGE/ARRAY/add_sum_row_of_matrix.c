#include<stdio.h>
int main(){
    int a[3][3],i,j,sumrow=0;
    printf("enter array elements:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
      for(i=0;i<3;i++){
        sumrow=0;
        for(j=0;j<3;j++){
           sumrow+=a[j][i];
        }
         printf("%d column sum is %d",i+1,sumrow);
        printf("\n");
    }

    return 0;
}