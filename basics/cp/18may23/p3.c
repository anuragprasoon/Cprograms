#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1, person2;
    
    // Input for person1
    printf("Enter details for person1:\n");
    
    printf("Enter Name: ");
    scanf(" %[^\n]", person1.name);
    
    printf("Enter Age: ");
    scanf("%d", &person1.age);
    
    // Copy person1 to person2
    person2 = person1;
    
    // Display person1 and person2
    printf("\nPerson1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    
    printf("\nPerson2:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    
    return 0;
}
