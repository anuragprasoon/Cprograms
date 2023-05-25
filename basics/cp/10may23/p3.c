#include <stdio.h>
int sum(int* a, int* b);
void main(){
    int a=10;
    int b=20;
    int c=sum(&a,&b);
    printf("The sum of two numbers: %d",c);
}
int sum(int* a, int* b){
    return *a + *b;]
}