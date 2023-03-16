#include <stdio.h>
void main(){
    int i,num[10],j;
    int sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("total: %d",sum);
    for(j=0;j<10;j++){
        printf("\nnum[%d] = %d",j,num[j]);
    }
}