//Q9
#include <stdio.h>
void main(){
    int day,year,week,days;
    printf("Enter days: ");
    scanf("%d",&day);
    year=day/365;
    week=(day- (year*365))/7;
    days=(day-(year*365))-(week*7);
    printf("\n%d year %d week %d days",year, week,days);


}