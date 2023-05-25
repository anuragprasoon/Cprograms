#include <stdio.h>
#include <string.h>

int vowel(char* a, int n){
    int c=0;
    for(int i=0;i<n;i++){
        if (*(a+i)=='a'||*(a+i)=='i'||*(a+i)=='o'||*(a+i)=='u'||*(a+i)=='e'||*(a+i)=='A'||*(a+i)=='I'||*(a+i)=='E'||(a+i)=='U'||(a+i)=='O'){
            c+=1;
        }
    }
    return c;

}

int main(){
    char str[100];
    gets(str);
    char* a;
    a= &str[0];
    int n=strlen(str);
    int v=vowel(a,n);
    printf("Number of Vowel in the string : %d",v);
    return 0;
}