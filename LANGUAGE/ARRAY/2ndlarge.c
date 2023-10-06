#include <stdio.h>
void main()
{
    int arr[30], n, i;
    int sum = 0;
    printf("Enter n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array is \n");
    for (i = 1; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
   int large=arr[0];
   int slarge=arr[1];
   if(slarge>large){
    int temp=slarge;
    slarge=large;
    large=temp;
   }
   for(i=2;i<n;i++){
    if(arr[i]>large){
        slarge=large;
        large=arr[i];
    }else if(arr[i]>slarge && arr[i]!=large){
        slarge=arr[i];
    }
   }

 printf("slarge and large is %d %d ",slarge,large);
}