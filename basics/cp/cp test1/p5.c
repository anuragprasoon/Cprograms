//Q5
#include<stdio.h>
int main(){
    double a,b,c;//question number 5
    printf("enter two numbers");
    scanf("%lf %lf",&a,&b);
    c=(a>b)?(a-b):(b-a);
    double p=c/(double)a*100;
    printf("%lf\n",p);
    return 0;

}