#include <stdio.h>
int max(int*a , int* b);
void main(){
    int a=10;
    int b=20;
    int c=max(&a,&b);
    printf("the greatest no among the two :%d",c);
}
int max(int*a , int* b){
    return (*a>*b)?*a:*b;

}
