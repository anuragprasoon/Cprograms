#include <stdio.h>
void main(){
    int n,num;
    float total,sum;
    n=0;
    printf("Enter the total number of numbers in the set:");
    scanf("%d",&num);
    while(n<num){
        printf("Enter the number:");
        scanf("%f",&sum);
        total=+sum;
        n++;
    }
    printf("The Average: %f",total/num);

}