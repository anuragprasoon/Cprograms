#include <stdio.h>
void main(){
    float n,sum;
    sum=0;
    float i=1;
    printf("Enter a number: ");
    scanf("%f",&n);
    while(i<=n){
        sum=sum+ (1/i);
        i++;
    }
    printf("the sum of the harmonic series of %f is %f",n,sum);
}