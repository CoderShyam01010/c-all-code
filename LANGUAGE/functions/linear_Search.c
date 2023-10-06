#include<stdio.h>
void linear_search(int arr[],int size){
   int i,num,flag=0,pos;
   printf("Enter element u want to find? ");
   scanf("%d",&num);
   for(i=0;i<size;i++){
    if(arr[i]==num){
     pos=i+1;
        flag=1;
        break;
    }
    
   }
   if(flag==1) printf("%d is the %dth element in the array\n",num,pos);
   else printf("Element not found!\n");
}
void main(){
    int n;
    int Myarr[30];
    printf("Enter array size: ");
    scanf("%d",&n);
printf("Enter array elements:\n");
for(int i=0;i<n;i++){
    scanf("%d",&Myarr[i]);
}
 linear_search(Myarr,n);
}