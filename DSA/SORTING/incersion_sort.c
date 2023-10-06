#include<stdio.h>
void main()
{
    int a[30],i,j,n;
    printf("enter arrau size : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){          
         j=i;
        while(j>=1 && a[j]<a[j-1]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
    printf("Sorted array is : ");
         for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}