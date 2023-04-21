/*  q9) */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[100],t[100];
    printf("Enter the 1st string: ");
    scanf("%s",&s);
    strcpy(t,s);
    strrev(s);

    if(strcmp(t,s)==0){
        printf("It's Pallindrome");
    }else{
        printf("It's not Pallindrome");
    }

}