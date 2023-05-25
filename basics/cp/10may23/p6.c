#include <stdio.h>
void swap(int* a,int* b);
void main(){
    int a=10;
    int b=20;
    swap(&a,&b);
}
void swap(int* a,int* b){
    int t=*b;
    *b=*a;
    *a=t;
    printf("the value of a: %d\n",*a);
    printf("the value of b: %d\n",*b);
}