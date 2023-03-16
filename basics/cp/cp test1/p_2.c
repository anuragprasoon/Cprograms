//Q2
#include <stdio.h>
void main(){
    int a=7200; //cost of the artcile;
    float d20 = 0.2*a;
    float d10=0.1*d20;
    float disc=d10+d20;
    float price=a-disc;
    float discp= (disc/a)*100;
    printf("the selling price: %f \n",price);
    printf("the total discount: %f \n",disc);
    printf("the discount percentage: %f \n",discp);

}