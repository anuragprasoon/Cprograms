#include<stdio.h>
int gcd(int x,int y);
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The GCD: %d",gcd(a,b));
}
int gcd(int a,int b){
     int t;
     while(b!=0){
        t=b;
        b=a%b;
        a=t;
     }
     return a;

}