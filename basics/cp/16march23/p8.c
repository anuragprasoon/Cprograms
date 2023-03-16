#include <stdio.h>
void main(){
    char ch;
    int a;
    scanf("%c",&ch);
    if((int)ch>90&&ch<=122){
        a=ch-32;
        ch=(char)a;
        printf("Upper Case:%c",ch);
    }else{
        printf("It's already in upper case : %c",ch);
    }
}