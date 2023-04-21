/* Q7)  */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main(){
    char s[100];
    char c=' ';
    printf("Enter a String: ");
    gets(s);
    int l = strlen(s);
    int i;
    for(i=0;i<=l;i+=1){
        if(s[i]==c){
            printf("%c \n",s[i-1]);
        }
        if(s[i]=='\0'){
            printf("%c \n",s[i-1]);

        }

    }




}