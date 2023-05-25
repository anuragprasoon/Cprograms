#include <stdio.h>
void main(){
    int* p;
    int a=10;
    p =&a;
    printf("The address of A: %p\n",p);
    a=20;
    printf("The address of A: %p\n",p);

}