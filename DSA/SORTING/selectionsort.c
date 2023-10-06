#include<stdio.h>
void main()
{
    int a[5],i,j;
    printf("Enter array elements : ");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        int min=i;
        for(j=i+1;j<5;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min != i){
            int temp=a[i];
            a[i]=a[min];
           a[min]=temp;
        }
    }
    printf("sorted array is: ");
     for(i=0;i<5;i++){
   printf("%d ",a[i]);
    }
}