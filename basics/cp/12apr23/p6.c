#include<stdio.h>
void main(){
    int arr[10];
    int brr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<10;i++){
        brr[i]=arr[i];
    }
    for(int i=0;i<10;i++){
        printf("%d  ",brr[i]);
    }
    

}