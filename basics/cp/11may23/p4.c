#include <stdio.h>
#include <string.h>
void rev(char* a, int n){
    for(int i=n-1;i>=0;i--){
        printf("%c",*(a+i));
    }

}
void main(){
    char str[100];
    gets(str);
    char* a;
    a= &str[0];
    int n=strlen(str);
    printf("reverse a string\n");
    rev(a,n);
}