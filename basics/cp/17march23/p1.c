#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num1, *num2, *sum;
    num1 = (int *)malloc(sizeof(int));
    num2 = (int *)malloc(sizeof(int));
    sum = (int *)malloc(sizeof(int));
    printf("Enter the first number: ");
    scanf("%d", num1);
    printf("Enter the second number: ");
    scanf("%d", num2);
    *sum = *num1 + *num2;
    printf("The sum of %d and %d is %d\n", *num1, *num2, *sum);

    free(num1);
    free(num2);
    free(sum);

    return 0;
}
