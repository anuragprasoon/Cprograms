#include <stdio.h>
void main(){
    int i;
    printf("enter any number: ");
    scanf("%d",&i);
    if(i>=0||i<=128){
        printf("%d",'0'+i);
    }
}