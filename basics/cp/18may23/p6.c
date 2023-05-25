#include <stdio.h>

struct Book {
    char title[100];
    int pages;
    char author[50];
    float price;
};

int main() {
    struct Book books[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        
        printf("Enter Title: ");
        scanf(" %s", books[i].title);
        
        printf("Enter Pages: ");
        scanf("%d", &books[i].pages);
        
        printf("Enter Author: ");
        scanf(" %s", books[i].author);
        
        printf("Enter Price: ");
        scanf("%f", &books[i].price);
        
        printf("\n");
    }

    printf("All Books:\n");
    for (int i = 0; i < 4; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Pages: %d\n", books[i].pages);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }
    
    return 0;
}
