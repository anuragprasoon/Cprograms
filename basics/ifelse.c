#include <stdio.h>
int main(){
    int var=10;
    char c='a';
    //nested if
    if(var==1){
        if(c=='a')
            printf("nice");
    }else{
        printf("bad");
    }
    return 0;

}