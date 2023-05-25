//WAP IN C TO COMPARE TWO FILES AND CHECK WHETHER THEY ARE IDENTICAL OR NOT.
#include <stdio.h>

int compareFiles(FILE *file1, FILE *file2) {
    int char1, char2;

    do {
        char1 = fgetc(file1);
        char2 = fgetc(file2);

        if (char1 != char2) {
            return 0; 
        }
    } while (char1 != EOF && char2 != EOF);

    if (char1 == EOF && char2 == EOF) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    FILE *file1, *file2;
    int result;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    result = compareFiles(file1, file2);

    fclose(file1);
    fclose(file2);

    if (result == 1) {
        printf("The files are identical.\n");
    } else {
        printf("The files are not identical.\n");
    }

    return 0;
}
