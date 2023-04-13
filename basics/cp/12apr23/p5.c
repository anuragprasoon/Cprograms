#include<stdio.h>
void main(){

    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max1;
    int max2;
    max1=arr[0];
    max2=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max1){
         max2=max1;
         max1=arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("Second maximum number of array is: %d",max2);
}