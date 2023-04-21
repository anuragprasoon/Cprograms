#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char s[100];
    printf("Enter the 1st string: ");
    scanf("%s",&s);
    int len=strlen(s);
    int alpha=0,vow=0,word=1,con=0;
    for(int i=0;i<=len;i++){
        char c=s[i];
        if(isaplha(c)==0){
            alpha++;
        }
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vow++;
        }
        if(s[i]==' '){
            word++;
        }

    }
    printf("%d %d %d ",alpha,vow,word);

}