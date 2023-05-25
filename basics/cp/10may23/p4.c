#include <stdio.h>
void main(){
    int a=10;
    int b=20;
    int* ada;
    int* adb;
    ada=&a;
    adb=&b;
    printf("The value of a : %d\n",*ada);
    printf("The value of a : %d",*adb);
}
