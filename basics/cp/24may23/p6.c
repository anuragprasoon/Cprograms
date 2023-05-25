//WAP to read the number from thhe the user and write it in the file , 
//also find the odd or even numbers by reading the file and store it into the separate the file, odd and even.
#include <stdio.h>

int main() {
    FILE *numbersFile, *oddFile, *evenFile;
    int number;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Open the file for writing
    numbersFile = fopen("numbers.txt", "w");
    if (numbersFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the number to the file
    fprintf(numbersFile, "%d", number);

    // Close the file
    fclose(numbersFile);

    // Open the file for reading
    numbersFile = fopen("numbers.txt", "r");
    if (numbersFile == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Open separate files for odd and even numbers
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");
    if (oddFile == NULL || evenFile == NULL) {
        printf("Error opening files for writing.\n");
        fclose(numbersFile);
        return 1;
    }

    // Read each number from the file and determine if it's odd or even
    fscanf(numbersFile, "%d", &number);
    if (number % 2 == 0) {
        fprintf(evenFile, "%d", number);
    } else {
        fprintf(oddFile, "%d", number);
    }

    // Close the files
    fclose(numbersFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers categorized as odd and even and stored in separate files.\n");

    return 0;
}
