#include <stdio.h>
int main(){
    char line[255];
    FILE *file = fopen("abc.txt","r");
    
    fgets(line,255,file);
    fclose(file);
    printf("%s",line);
    return 0;
}