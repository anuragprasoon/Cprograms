#include <stdio.h>

void sayHi(char name[]); //function signature //function prototyping
int main(){
    sayHi("Mike");
    return 0;
    
}

void sayHi(char name[]){
    printf("Hi %s",name);
}