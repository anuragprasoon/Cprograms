/*Q6) The angles of a quadrilateral are in the ratio 3:4:5:6. Write a program to
find and display all of its angles.*/
#include <stdio.h>
void main(){
    int a=3,b=4,c=5,d=6; //taking the ratio of the angles
    int x= 360/(a+b+c+d);
    a*=x;
    b*=x;
    c*=x;
    d*=x;
    printf("The First angle of quadtrilateral: %d \n",a);
    printf("The Second angle of quadtrilateral: %d \n",b);
    printf("The Third angle of quadtrilateral: %d \n",c);
    printf("The Fourth angle of quadtrilateral: %d \n",d); 
}