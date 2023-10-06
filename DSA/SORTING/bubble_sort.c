#include<stdio.h>
void main(){
    int a[8],i,j;
    printf("Enter array elements: ");
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++){
        int flag=0;
        for(j=0;j<7-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        } 
    }
    printf("\n");
     printf("Sorted array is : ");
    for(i=0;i<8;i++){
        printf("%d",a[i]);
    }
   

}