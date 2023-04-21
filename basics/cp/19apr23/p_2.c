/* q2) wap to implement binary search where list of sorted element in a array*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    int arr[5]={11,23,37,43,51};
    int f,l,mid,search,n,c;
    n=0;
    f=0;
    l=4;
    mid=(f+l)/2;
    printf("enter the element to search: ");
    scanf("%d",&search);
    while(n==0){
        if(arr[mid]>search){
            l=mid;
            f=0;
            mid=(f+l)/2;
        }else if(arr[mid]<search){
            f=mid;
            l=4;
            mid=(f+l)/2;
        }
        if(arr[mid]==search){
            printf("\n element found at %d",mid);
            n=1;
            break;
        }

        
    }
}