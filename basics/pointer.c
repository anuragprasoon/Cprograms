#include <stdio.h>
int main(){
    int a=10;
    int * pA= &a; //pointer 
    double gpa=3.4;
    double *pGpa = &gpa; //pointer
    char gender='M';
    char * aGender= &gender; //pointer

    printf("%p \n",aGender);
    printf("%c \n",*aGender); //dereferencing pointer
    printf("%c \n",*&gender); //dereferencing pointer
    return 0;
}