#include <stdio.h>
void main(){
    char text[5]="hello";
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",text[j]);
        }
        printf("\n");
    }
    for(i=4;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("%c",text[j]);
        }
        printf("\n");
    }
}