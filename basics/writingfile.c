#include <stdio.h>
int main(){
    FILE *fpointer = fopen("abc.txt","w");
    fprintf(fpointer,"hello my name is Anurag");
    fclose(fpointer);
    return 0;
}