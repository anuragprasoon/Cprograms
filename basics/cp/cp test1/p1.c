//Q1
#include <stdio.h>
void main(){
    int a=10000; //price of the article
    float gst=0.1*a;
    float price=a+gst;
    printf("The Gst amount: %f\n",gst);
    printf("Total amount: %f\n",price);
}