#include <stdio.h>
#include <string.h>
struct mycar{
    char name[5];
    int wheel;
    float price;
    };
void main(){
    struct mycar bmw={"bmwz4",4,84.83};
    printf("\n %s %d %f \n",bmw.name,bmw.wheel,bmw.price);
}