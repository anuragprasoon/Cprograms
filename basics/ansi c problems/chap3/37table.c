#include <stdio.h>
void main(){
    int i,n;
    printf("enter a number: ");
    scanf("%d",&i);
    for(n=1;n<=10;n++){
        printf("\n %d x %d : %d",i,n,i*n);
    }
}