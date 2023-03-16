#include <stdio.h>
void main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("\nIt's a vowel");
    }else{
        printf("\nIt's a consonant.");

    }


}