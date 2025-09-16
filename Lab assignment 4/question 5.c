#include <stdio.h>
int main() {
    int marks;

    printf("Enter the student's marks (0–100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input entered. Please enter a valid integer.\n");
        return 1;
    }
    if (marks < 0 || marks > 100) {
        printf("Error. Marks should be between 0 and 100.\n");
        return 1;
    }
    if (marks >= 85 && marks <= 100) {
        printf("Your Grade is A\n");
    }
    else if (marks >= 70 && marks <= 84) {
        printf("Your Grade is B\n");
    }
    else if (marks >= 55 && marks <= 69) {
        printf("Your Grade is C\n");
    }
    else if (marks >= 40 && marks <= 54) {
        printf("Your Grade is D\n");
    }
    else {
        printf("Your Grade is F\n");
    }
    return 0;
}
