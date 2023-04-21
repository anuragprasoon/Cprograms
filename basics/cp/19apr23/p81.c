/* q8) part b*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[100],g[100];
    printf("Enter the 1st string: ");
    scanf("%s",s);
    printf("Enter the 2nd string: ");
    scanf("%s",g);
    char l[100];
    int len=strlen(s);
    for(int i=0;i<=len;i++){
        l[i]=s[i];
    }
    int len1=strlen(l);
    len=strlen(g);
    for(int i=0;i<=len;i++){
        l[len1+i]=g[i];
    }

    printf("%s",l);

}