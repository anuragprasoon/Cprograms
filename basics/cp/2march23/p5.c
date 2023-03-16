#include <stdio.h>
void main(){
    int a,b,c;
    printf("enter amount in paisa: ");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    printf("\n%d Paisa = %d Rupee %d Paisa",a,b,c);
}