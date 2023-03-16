#include <stdio.h>
void main(){
    int n;
    int num=0;
    float  sum,total;
    printf("Enter the total number of numbers in the set:");
    scanf("%d",&n);
    for(num=1;num<=n;num++){   /*using for loop*/
        printf("Enter a number: ");
        scanf("%f",&sum);
        total=+sum;
    }
    printf("The average of the following sets of the number is %1.2f",total/n);
}