#include <stdio.h>
void main(){
    int table[5][5],i,j,k,l;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            table[i][j]=(j+1)*(i+1);
        }
    }
    for(k=0;k<5;k++){
        for(l=0;l<5;l++){
            printf("%4d ",table[k][l]);
        }
        printf("\n");
    }
}