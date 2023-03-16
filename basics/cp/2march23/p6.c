#include <stdio.h>
void main(){
    int a,hr,min,sec;
    printf("enter time in sec: ");
    scanf("%d",&a);
    hr=a/3600;
    min=(a%3600)/60;
    sec=((a%3600)%60)%60;
    printf("\n%d Sec = %d hours %d mins %d secs",a,hr,min,sec);
}