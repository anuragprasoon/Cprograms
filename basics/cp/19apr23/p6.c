/*wap to take a string and replace character with a new character and print the new string*/
#include <stdio.h>
#include <string.h>a

int main() {
    char str[100];
    char old_char, new_char;
    int len = strlen(str);
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to replace: ");
    scanf("%c", &old_char);
    printf("Enter the new character: ");
    scanf(" %c", &new_char);
    for (int i = 0; i < len; i++) {
        if (str[i] == old_char) {
            str[i] = new_char;
        }
    }
    printf("Modified string: %s", str);
}

