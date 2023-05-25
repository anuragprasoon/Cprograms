#include <stdio.h>
#include <string.h>
void prnt(char* a, int n){
    for(int i=0;i<n;i++){
        printf("%c",*(a+i));
    }

}
void main(){
    char str[100];
    gets(str);
    char* a;
    printf("PRINTING AN ARRAY USING POINTER\n");
    a= &str[0];
    int n=strlen(str);
    prnt(a,n);
}