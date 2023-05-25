//WAP to show write 1 character at a time in the txt file.
#include <stdio.h>

int main() {
    FILE *file;
    char text[] = "Hello, !";
    char *ptr = text;
    
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    while (*ptr != '\0') {
        fputc(*ptr, file);
        fputc('\n', file);
        ptr++;
    }
    
    fclose(file);
    printf("Characters written to the file.\n");
    
    return 0;
}
