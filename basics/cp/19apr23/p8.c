/* q8) part a*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[100],g[100];
    printf("Enter the 1st string: ");
    scanf("%s",s);
    printf("Enter the 2nd string: ");
    scanf("%s",g);
    strcat(s,g);
    printf("\n %s",s);

}