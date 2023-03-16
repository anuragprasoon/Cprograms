#include <stdio.h>

int main(){
    const double PI = 3.14;    
    int ivar=32;
    float fvar=1.23;
    char cvar='A';
    printf("char: %ld \n",sizeof(char));
    printf("int: %ld \n",sizeof(int));
    printf("double: %ld \n",sizeof(double));
    printf("float: %ld \n",sizeof(float));
    printf("%d \n",ivar);
    printf("%f \n",fvar);
    printf("%c \n",cvar);
    printf("CONSTANT PI:%f \n",PI);
    return 0;
}