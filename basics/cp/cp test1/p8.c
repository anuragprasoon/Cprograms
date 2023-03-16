/*Q8) Write a program to accept the diagonal of a square. Find and display the
area and perimeter of the square.*/
#include <stdio.h>
void main(){
    int d; //diagonal
    printf("enter the diagonal of a sqaure:");
    scanf("%d",&d);
    int p=(2*1.414)*d; //perimeter
    int a=(0.5)*d*d; //area
    printf("The Perimeter of the square: %d \n",p);
    printf("The Area of the square: %d \n",a);

    
}