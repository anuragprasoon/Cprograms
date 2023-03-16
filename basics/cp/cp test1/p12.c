/*Q12 4*/
#include <stdio.h>
void main(){
    int a,b;
    float ans1;
    printf("enter digit A:");
    scanf("%d",&a);
    printf("\nenter digit B:");
    scanf("%d",&b);
    int no=(10*a)+b;//the numbber
    int rev=(10*b)+a;// the reversed number
    float sum=no+rev;
    float sub=(a>b)?(a-b):(b-a);
    ans1 =sum/sub;
    printf("\nthe result: %f", ans1); /*the result*/
}