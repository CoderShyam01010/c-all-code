#include<stdio.h>
void main(){
    int a[30];
    int n,i,d;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("ENter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter how many places u want to rotate ? ");
    scanf("%d",&d);
     int temp[d];
    for(i=0;i<d;i++){
         temp[i]=a[i];
    }
    for(i=d;i<n;i++){
        a[i-d]=a[i];
    }
    int j=0;
    for(i=(n-d);i<n;i++){
        a[i]=temp[j];
        j++;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}