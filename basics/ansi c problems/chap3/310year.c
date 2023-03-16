#include <stdio.h>
void main(){
    int day,year,week,days;
    day=373;
    year=day/365;
    week=(day- (year*365))/7;
    days=(day-(year*365))-(week*7);
    printf("year: %d week: %d  days: %d",year, week,days);


}