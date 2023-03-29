#include <stdio.h>
void main(){
    int i,j,n;
    n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",(i+j+1)%2);
        }
        printf("\n");
    }
}