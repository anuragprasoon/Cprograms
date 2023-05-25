#include <stdio.h>
int exponent(int a, int b);
void main(){
    int x,y;
    printf("enter a no.: ");
    scanf("%d",&x);
    printf("enter the power: ");
    scanf("%d",&y);
    printf("%d to the power of %d is %d",x,y,exponent(x,y));

}
int exponent(int a, int b){
    int pow=1;

    for(int i=1;i<=b;i++){
        pow*=a;
    }
    return pow;
}
