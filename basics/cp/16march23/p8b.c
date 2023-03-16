#include <stdio.h>
void main(){
    char ch;
    int a;
    scanf("%c",&ch);
    if((int)ch>=65&&ch<91){
        a=ch+32;
        ch=(char)a;
        printf("lower Case:%c",ch);
    }else{
        printf("It's already in upper case : %c",ch);
    }
}