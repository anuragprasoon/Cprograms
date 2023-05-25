#include <stdio.h>
float compute(float r,float* p);
void main(){
    float rad=10;
    float* peri;
    float c=compute(rad,peri);
    printf("the area: %d",c);
    printf("the perimeter: %d",*peri);

}
float compute(float r,float* p){
    float a = (float)3.14*r*r;
    *p=(float)3.14*2*r;
    return a;
}