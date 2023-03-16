#include <stdio.h>
int main(){
    float div;
    int var=10;
    int var2=3;
    div =(float)var/var2; //typecasting
    printf("%f \n",div);
    div = var/var2; //without typecasting
    printf("%f",div);
    return 0;
}