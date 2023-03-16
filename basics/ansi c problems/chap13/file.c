#include <stdio.h>
void main(){
    FILE *fp;
    fp=fopen("hello.txt","r+");
    
    fclose(fp);

}