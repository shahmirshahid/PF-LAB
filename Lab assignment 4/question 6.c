#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three valid integers: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input/s entered. Please enter three valid integers.\n");
        return 1;
    }
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    }
    else {
        printf("The largest number is: %d\n", num3);
    }
    return 0;
}
