#include <stdio.h>
void binary_search(int arr[], int size)
{
    int num, l = 0, r = (size - 1),flag=0;
    printf("Enter element u want to find? ");
    scanf("%d", &num);
    
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (num == arr[mid])
        {
            printf("%d is the %dth element in the array\n", num, mid + 1);
            flag=1;
            break;
        }
        else if (num < arr[mid])
        {
            r = mid - 1;
        }
        else {
        
            l = mid + 1;
        }
if (l>r) printf("element is not present in the array!\n");
    }

} 
void main()
{
    int n,i,flag,j;
    int Myarr[30];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Myarr[i]);
    }
    printf("user define array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Myarr[i]);
    }
    printf("\n");
    //lower part is for sorting the elements.
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<n-i;j++){
            if(Myarr[j]>Myarr[j+1]){
                int temp = Myarr[j];
                Myarr[j]=Myarr[j+1];
                Myarr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        } 
    }
    printf("New sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",Myarr[i]);
    }
    printf("\n"); 
    binary_search(Myarr, n);
}