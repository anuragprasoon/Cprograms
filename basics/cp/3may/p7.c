#include <stdio.h>
int fib(int);
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("The %d term of fibonacci : %d",num,fib(num));
    return 0;
}
int fib(int num){
    if(num==1)
    return 0;
    else if(num==2)
    return 1;
    else
    return fib(num-1)+fib(num-2);
}