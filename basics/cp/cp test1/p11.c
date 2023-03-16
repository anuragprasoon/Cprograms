//Q11
#include<stdio.h>
int main() {
    int da,hra,pf,gross,netpay,a;//question number 11
    scanf("%d",&a);
    da=0.3*a;
    hra=0.125*a;
    pf=0.1*a;
    gross=a+da+hra;
    netpay=gross-pf;
    printf("Gross: %d NetPay: %d",gross,netpay);
    return 0;
}