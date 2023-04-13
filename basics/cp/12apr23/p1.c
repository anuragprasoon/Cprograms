#include <stdio.h>
void main(){
    int arr[10];
    float sum=0.0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    printf("average no.: %f",sum/10);
}