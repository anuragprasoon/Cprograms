#include<stdio.h>
void main(){
    int i,j,n;
    n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int m=i-1;m>=1;m--){
            printf("%d",m);
        }
        printf("\n");
    }
}