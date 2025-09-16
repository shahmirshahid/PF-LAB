#include <stdio.h>
int main(){
	float number1, number2;
    char op;

    printf("Enter the first number: ");
    if (scanf("%f", &number1) != 1) {
        printf("Invalid input entered. Please enter a valid number.\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%f", &number2) != 1) {
        printf("Invalid input entered. Please enter a valid number.\n");
        return 1;
    }
    printf("Enter operator for the operation you want to occur (+, -, *, /): ");
    scanf("%c", &op);
    
   switch (op) {
        case '+':
            printf("Result: %f\n", number1 + number2);
            break;

        case '-':
            printf("Result: %f\n", number1 - number2);
            break;

        case '*':
            printf("Result: %f\n", number1 * number2);
            break;

        case '/':
            if (number2 == 0) {
                printf("Error: Division by zero is not possible.\n");
            } else {
                printf("Result: %f\n", number1 / number2);
            }
            break;

        default:
            printf("Invalid operator entered. Please use +, -, * or /.\n");
    }
    return 0;

}
