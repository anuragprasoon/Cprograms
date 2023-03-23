#include <stdio.h>
void main(){
    int a,b,gcd;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    int c=(a<b)?a:b;
    for(int i=1;i<=c;i++){
       if(a%i==0 && b%i==0){
        gcd=i;
       }
    }
    printf("gcd: %d",gcd);
    }