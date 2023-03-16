#include <stdio.h>
void main(){
    char w[5]="hello";
    float test=10.1;
    char* p1 = &w[0];
    float* f= &test;
    printf("%p \n",f);
    printf("%p \n",p1);
    printf("%lu \n",sizeof(w));
    printf("%c ", *(p1+0));
    
}