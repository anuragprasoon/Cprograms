#include <stdio.h>
int main() {
    int num, origNum, rem, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    origNum = num;

    while (origNum != 0) {
       
        rem = origNum % 10;
        
       result += rem * rem * rem;
        
       
       origNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}