#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person;

    struct Person *ptr;
    
    ptr = &person;
    
    printf("Enter Name: ");
    scanf(" %s", person.name);
    
    printf("Enter Age: ");
    scanf("%d", &person.age);
    

    printf("\nUsing Pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    
    return 0;
}
