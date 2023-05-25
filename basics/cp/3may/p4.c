#include<stdio.h>
int gcd(int x,int y);
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The HCF of %d and %d is %d",a,b,gcd(a,b));
}
int gcd(int a,int b){
     if(b!=0){
        return gcd(b,a%b);
     }else{
        return a;
     }

}