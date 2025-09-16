#include <stdio.h>

int main() {
    int number;

    printf("Enter a valid integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input entered. Please enter a valid integer.\n");
        return 1;
    }
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    }
    else {
        printf("%d is an odd number.\n", number);
    }
    return 0;
}
