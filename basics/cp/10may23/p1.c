#include <stdio.h>
void main(){
    int a;
    float b;
    double c;
    char d;
    int* adda;&a;
    int* addb= &b;
    int* addc= &c;
    int* addd= &d;
    printf("size of int pointter: %d \n",sizeof(adda));
    printf("size of float pointter: %d \n",sizeof(addb));
    printf("size of double pointter: %d \n",sizeof(addc));
    printf("size of char pointter:  %d \n",sizeof(addd));

}