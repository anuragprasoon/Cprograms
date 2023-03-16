#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    switch(num){
    case 1:
        printf("pressed 1");
        break;
    case 2:
        printf("pressed 2");
        break;
    case 3:
        printf("pressed 3");
        break;
    default:
       printf("default");
    }
    return 0;
}