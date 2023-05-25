#include <stdio.h>
int lcm(int num1, int num2);
void main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = lcm(num1, num2);
    printf("LCM of %d and %d is %d", num1, num2, result);
}
int lcm(int num1, int num2) {
    static int multiple = 0;
    multiple += num2;
    if(multiple % num1 == 0 && multiple % num2 == 0) {
        return multiple;
    } else {
        return lcm(num1, num2);
    }
}
