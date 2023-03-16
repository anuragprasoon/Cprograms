#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char gender;
    int age;

};

int main() {
    struct Student std1;
    std1.gender='M';
    std1.age=14;
    strcpy(std1.name,"Anurag");
    printf("Name: %s Gender: %c Age: %d",std1.name,std1.gender,std1.age);

    return 0;
}