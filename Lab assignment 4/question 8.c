#include <stdio.h>
#include <math.h>   // for power operator.
int main() {
    int number1, number2;
    char op;

    printf("Enter the first integer: ");
    if (scanf("%d", &number1) != 1) {
        printf("Invalid input entered. Please enter a valid integer.\n");
        return 1;
    }
    printf("Enter the second integer: ");
    if (scanf("%d", &number2) != 1) {
        printf("Invalid input entered. Please enter a valid integer.\n");
        return 1;
    }
    printf("Enter the operator you want to perform.(+, -, *, /, %%, ^): ");
    scanf("%c", &op);
    switch (op) {
        case '+':
            printf("Result: %d\n", number1 + number2);
            break;

        case '-':
            printf("Result: %d\n", number1 - number2);
            break;

        case '*':
            printf("Result: %d\n", number1 * number2);
            break;
        case '/':
            if (number2 == 0) {
                printf("Error. Division by zero is not possible.\n");
            } else {
                printf("Result: %d\n", number1 / number2);
            }
            break;
        case '%':
            if (number2 == 0) {
                printf("Error. Modulus by zero is not possible.\n");
            } else {
                printf("Result: %d\n", number1 % number2);
            }
            break;
        case '^':
            printf("Result: %f\n", pow(number1, number2));
            break;
        default:
            printf("Invalid operator used. Please use +, -, *, /, %%, or ^.\n");
    }
    return 0;
}
