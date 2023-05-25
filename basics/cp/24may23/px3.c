//WAP to count the no. of character, lines, space, tabs in a file.
#include <stdio.h>

int main() {
    FILE *file;
    char character;
    int characterCount = 0;
    int lineCount = 0;
    int spaceCount = 0;
    int tabCount = 0;

    file = fopen("source.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while ((character = fgetc(file)) != EOF) {
        characterCount++;

        if (character == '\n')
            lineCount++;
        else if (character == ' ')
            spaceCount++;
        else if (character == '\t')
            tabCount++;
    }

    fclose(file);

    printf("Number of characters: %d\n", characterCount);
    printf("Number of lines: %d\n", lineCount);
    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of tabs: %d\n", tabCount);

    return 0;
}
