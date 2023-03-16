#include <stdio.h>
int main(){
    int a;
    char cvar= getchar();
    char str[100];
    printf("cvar:%c \n",cvar);
    printf("printing using putchar:");
    putchar(cvar);
    gets(str);
    printf("\n string:%s \n",str);
    printf("printing using puts(): ");
    puts(str);
    scanf("%d",&a);
    printf("int: %d",a);


    return 0;

}