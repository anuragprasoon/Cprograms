/* q3 WAP to read and print strings with different options (scanf,printf,gets,puts)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[100];
    char t[100];
    printf("Enter a string: ");
    scanf("%s",&s);
    printf("%s \n",s);
    printf("Enter another string: ");
    gets(t);
    puts(t);

}

