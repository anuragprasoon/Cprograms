/* q4) wap to compare two strings if both of them are not same then concat two strings and print */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[100],t[100];
    printf("Enter the 1st string: ");
    scanf("%s",&s);
    printf("Enter the 2nd string: ");
    scanf("%s",&t);
    if(strcmp(t,s)!=0){
        strcat(s,t);
        printf("%s",s);
        
    }

}
