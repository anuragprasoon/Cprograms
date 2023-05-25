#include <stdio.h>

// Define the structure for storing student information
struct Student {
    int rollNo;
    char name[50];
    char gender;
    float marks;
};

int main() {
    int numStudents;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    

    struct Student students[numStudents];
    

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Enter Name: ");
        scanf(" %s", students[i].name);
        
        printf("Enter Gender (M/F): ");
        scanf(" %c", &students[i].gender);
        
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
    

    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Gender: %c\n", students[i].gender);
        printf("Marks: %.2f\n", students[i].marks);
    }
    
    return 0;
}
