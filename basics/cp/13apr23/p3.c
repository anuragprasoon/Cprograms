#include <stdio.h>
#include<stdlib.h>
int main() {
    int a[30],n,i,key,found=0;
    printf("\n How many numbers");
    scanf("%d",&n);
    if(n>30){
        printf("\n Too many Numbers");
        exit(0);
    }
    printf("\n Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Enter the key to be searched \n");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("\n Found at %d",i);
            found=1;
        }
    }
    if(found==0){
        printf("\n NOT FOUND ");
    }
    return 0;
}