#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf ("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
         min=arr[i];
        }
    }
    printf("Minimum number of array is: %d",min);
}