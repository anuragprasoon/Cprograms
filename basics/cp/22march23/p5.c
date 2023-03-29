/*wap to acceppt a positive no. and print the digit into word using switch case*/


#include <stdio.h>
void main(){
    int n,d,r;
    r=0;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    printf("%d",r);
    while(r!=0){
        r%
    }
}