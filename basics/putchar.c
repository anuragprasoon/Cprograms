#include <stdio.h>
void main(){
    char i[10];
    char j[10]="hello";
    char h;
    printf("Enter a char: ");
    h=getchar();
    printf("input:");
    putchar(h);
    printf("\ninput using printf: %c",h);
    printf("\nEnter a word: ");
    scanf("%s",&i);
    printf("input: %s",i);
    if(i==j){  /*trying to compare strings (its not working)*/
        printf("\ncheck");
    }else{
        printf("\nno");
    }
}