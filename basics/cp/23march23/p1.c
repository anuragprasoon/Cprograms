/*WAP to check whether a number is pallindrome or not*/
#include <stdio.h>
void main(){
    int n,d,r,n1;
    r=0;
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if(n1==r){
        printf("it's a pallindrome number.");
    }else{
        printf("It's not a pallindrome number.");
    }
}