#include <stdio.h>
int main(){
    int t;
    printf("Enter number:");
    scanf("%d",&t);
    int h = t/3600;
    int t1= t-(3600*h);
    int m= t1/60;
    int t2= t1-(60*m);
    printf("hours: %d",h);
    printf("\nminutes: %d",m);
    printf("\nseconds: %d", t2);
    return 0;
}