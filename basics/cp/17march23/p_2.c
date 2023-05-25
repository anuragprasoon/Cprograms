#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("The summation of array elements is: %d\n", sum);
    free(arr);

    return 0;
}
