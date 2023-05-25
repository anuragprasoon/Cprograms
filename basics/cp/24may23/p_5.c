//WAP in c to convert the file content into UPPER CASE and write the same into an another file
#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("source.txt", "r");
    outputFile = fopen("output1.txt", "w");


    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; 
        }
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
