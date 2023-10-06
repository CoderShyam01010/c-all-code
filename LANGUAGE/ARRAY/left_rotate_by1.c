//left rotate the array by 1 place
//e.g, 1,2,3,4,5 --> 2,3,4,5,1
#include<stdio.h>
void main(){
    int a[5]={1,2,3,4,5};
    int num=a[0];
    for(int i=0;i<5;i++){
        a[i]=a[i+1];
    }
    a[4]=num;
     for(int i=0;i<5;i++){
       printf("%d",a[i]);
    }
}