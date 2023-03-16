#include <stdio.h>
void main(){
    float dis,fuel;
    printf("enter the distance travlled: ");
    scanf("%f",&dis);
    printf("enter the amount of fuel consumed: ");
    scanf("%f",&fuel);
    printf("mileage of the car: %f km/l",dis/fuel);
}