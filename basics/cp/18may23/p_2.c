#include <stdio.h>

struct Book {
    char title[100];
    int isbn;
    float price;
};

int main() {
    struct Book book1, book2;

    printf("Enter details for Book 1:\n");
    
    printf("Enter Title: ");
    scanf(" %s", book1.title);
    
    printf("Enter ISBN: ");
    scanf("%d", &book1.isbn);
    
    printf("Enter Price: ");
    scanf("%f", &book1.price);

    printf("\nEnter details for Book 2:\n");
    
    printf("Enter Title: ");
    scanf(" %s", book2.title);
    
    printf("Enter ISBN: ");
    scanf("%d", &book2.isbn);
    
    printf("Enter Price: ");
    scanf("%f", &book2.price);

    printf("\nBook 1:\n");
    printf("Title: %s\n", book1.title);
    printf("ISBN: %d\n", book1.isbn);
    printf("Price: %.2f\n", book1.price);
    
    printf("\nBook 2:\n");
    printf("Title: %s\n", book2.title);
    printf("ISBN: %d\n", book2.isbn);
    printf("Price: %.2f\n", book2.price);
    
    return 0;
}
