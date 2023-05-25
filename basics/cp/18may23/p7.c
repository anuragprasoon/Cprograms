#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;
    
    result.hours = t1.hours + t2.hours;
    result.minutes = t1.minutes + t2.minutes;
    result.seconds = t1.seconds + t2.seconds;
    
    if (result.seconds >= 60) {
        result.minutes += result.seconds / 60;
        result.seconds %= 60;
    }
    
    if (result.minutes >= 60) {
        result.hours += result.minutes / 60;
        result.minutes %= 60;
    }
    
    return result;
}

int main() {
    struct Time time1, time2, result;
 
    printf("Enter Time 1:\n");
    printf("Hours: ");
    scanf("%d", &time1.hours);
    printf("Minutes: ");
    scanf("%d", &time1.minutes);
    printf("Seconds: ");
    scanf("%d", &time1.seconds);

    printf("\nEnter Time 2:\n");
    printf("Hours: ");
    scanf("%d", &time2.hours);
    printf("Minutes: ");
    scanf("%d", &time2.minutes);
    printf("Seconds: ");
    scanf("%d", &time2.seconds);

    result = addTimes(time1, time2);
    
    printf("\nResult:\n");
    printf("Hours: %d\n", result.hours);
    printf("Minutes: %d\n", result.minutes);
    printf("Seconds: %d\n", result.seconds);
    
    return 0;
}
