/*WAP TO implement bubble sort to sort the elements present in an array in ascending order*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    int arr[5]={6,3,5,2,4};
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
}